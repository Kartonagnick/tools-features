[![logo](logo.png)](../home.md "for developers") 

[R]: icons/release.png   "релизная версия"
[P]: icons/progress.png  "в процессе..."
[S]: icons/success.png   "ошибок не обнаружено"
[F]: icons/failed.png    "была выявлена ошибка"
[D]: icons/danger.png    "дефекты, недоработки, некритичные баги"
[E]: icons/empty.png     "нет данных"
[B]: icons/bug.png       "обнаружен баг"
[N]: icons/na.png        "функциональность не доступна"

<a name="main"></a>
[![P]][M] features v0.0.2 
=========================

| **ID** |     элементы               |   mingw    |   mingw    |    mingw   |    mingw    |   mingw     |    msvc    |    msvc    |  
|:------:|:--------------------------:|:----------:|:----------:|:----------:|:-----------:|:-----------:|:----------:|:----------:|  
|        |                            |   810 730  |  640 630   |   540 530  | 494 493 492 | 485 484 483 | 2019 2017  |  2013 2012 |  
|        |                            |   720 710  |  620 610   |   520 510  |   491 490   |   482 481   |   2015     |  2010 2008 |  
|  0000  | [dHAS_ATOMIC][00]          | [![S]][00] | [![S]][00] | [![S]][00] | [![S]][00]  | [![S]][00]  | [![S]][00] | [![S]][00] |  
|  0001  | [dSTATIC_CHECK][01]        | [![S]][01] | [![S]][01] | [![S]][01] | [![S]][01]  | [![S]][01]  | [![S]][01] | [![S]][01] |  
|  0002  | [dCAN_DELETE_FUNCTION][02] | [![S]][01] | [![S]][01] | [![S]][01] | [![S]][01]  | [![S]][01]  | [![S]][01] | [![S]][01] |  
|  0003  | [dNOCOPYABLE][03]          | [![S]][01] | [![S]][01] | [![S]][01] | [![S]][01]  | [![S]][01]  | [![S]][01] | [![S]][01] |  
|  0004  | [dHAS_NOEXCEPT][04]        | [![S]][01] | [![S]][01] | [![S]][01] | [![S]][01]  | [![S]][01]  | [![S]][01] | [![S]][01] |  
|  0005  | [dNOEXCEPT][05]            | [![S]][01] | [![S]][01] | [![S]][01] | [![S]][01]  | [![S]][01]  | [![S]][01] | [![S]][01] |  

<br/>

[M]: #main  "определяет технические возможности компилятора"
[MINGW]:  #main  "поддержка компиляторов mingw"
[VS-NEW]: #main  "поддержка новых компиляторов msvc"
[VS-OLD]: #main  "поддержка старых компиляторов msvc"

[00]: #dHAS_ATOMIC
[01]: #dSTATIC_CHECK
[02]: #dCAN_DELETE_FUNCTION
[03]: #dNOCOPYABLE
[04]: #dHAS_NOEXCEPT
[05]: #dNOEXCEPT

dHAS_ATOMIC
-----------
Если определен, значит компилятору доступны стандартные заголовоки:  
```
    #include <atomic>
    #include <future>
    #include <thread>
    #include <mutex>
```

dSTATIC_CHECK
-------------
[ST]: https://en.cppreference.com/w/cpp/language/static_assert

Реализует `static_assert`  
Определен всегда, и для всех компиляторов.  
Для новых компиляторов используется стандартный [static_assert][ST]  
Для старых компиляторов используется самоделка:  

```
    template<bool> struct static_assert_;
    template<> struct static_assert_<true> {};

    #define dSTATIC_CHECK(msg, ...)          \
    {                                        \
        ::static_assert_<(__VA_ARGS__)> msg; \
        (void) msg;                          \
    } void()
```

Пример использования:  

```
void foo()
{
    enum { value = 1 };

    dSTATIC_CHECK(
        STATIC_ASSERT_NOT_WORKED, // сначала указываем сообщение
        value                     // затем указываем условие
    );
}
```

[![D]][M] Ограничения:  
Должен применятся только и только в области функции.  

dCAN_DELETE_FUNCTION
--------------------
[DF]: https://en.cppreference.com/w/cpp/language/function#Deleted_functions

Если компилятор поддерживает [синтаксис удаленных функций][DF],  
тогда макрос определен и равен 1  

Пример использования:  

```
struct some
{
    some(const char*);

    #ifdef dCAN_DELETE_FUNCTION
    some(nullptr_t) = delete;
    #endif
};

```

dNOCOPYABLE
-----------
Определен всегда, и для всех компиляторов.  
Макро-хэлпер предназначен для того,  
что бы запретить классу копирование/присвоение/перемещение.  

```
struct some
{
    // запрещаем копирование
    // запрещаем перемещение
    // запрещаем присвоение

    dNOCOPYABLE(some);

    some();
};

```

dHAS_NOEXCEPT
-------------
[SN]: https://en.cppreference.com/w/cpp/language/noexcept_spec

Если компилятор поддерживает [спецификатор noexcept][SN],  
тогда макрос определен и равен 1  

```
#ifdef dHAS_NOEXCEPT
    // указываем, что функция не кидает исключения
    void foo() noexcpet {}
#endif
```

dNOEXCEPT
---------
Определен всегда, и для всех компиляторов.  
Если компилятор поддерживает [спецификатор noexcept][SN],  
тогда макрос раскрывается в `noexcept`  
В противном случае, макрос развернётся в `throw()`  

Пример использования:  

```
    // указываем, что функция не кидает исключения
    void foo() noexcpet {}
```

--------------------------------------------

1) [История](history.md)  


