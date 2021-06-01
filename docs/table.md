[![logo](logo.png)](home.md "for developers") 

[R]: icons/release.png   "релизная версия"
[P]: icons/progress.png  "в процессе..."
[S]: icons/success.png   "ошибок не обнаружено"
[F]: icons/failed.png    "была выявлена ошибка"
[D]: icons/danger.png    "дефекты, недоработки, некритичные баги"
[E]: icons/empty.png     "нет данных"
[B]: icons/bug.png       "обнаружен баг"
[N]: icons/na.png        "функциональность не доступна"

<a name="main"></a>
[![P]][M] features v0.0.3 
=========================

| **ID** |     элементы               |   mingw    |   mingw    |    mingw   |    mingw    |   mingw     |    msvc    |    msvc    |  
|:------:|:--------------------------:|:----------:|:----------:|:----------:|:-----------:|:-----------:|:----------:|:----------:|  
|        |                            |   810 730  |  640 630   |   540 530  | 494 493 492 | 485 484 483 | 2019 2017  |  2013 2012 |  
|        |                            |   720 710  |  620 610   |   520 510  |   491 490   |   482 481   |   2015     |  2010 2008 |  
|  0000  | [dHAS_ATOMIC][00]          | [![S]][00] | [![S]][00] | [![S]][00] | [![S]][00]  | [![S]][00]  | [![S]][00] | [![S]][00] |  
|  0001  | [dHAS_STATIC_ASSERT][01]   | [![S]][01] | [![S]][01] | [![S]][01] | [![S]][01]  | [![S]][01]  | [![S]][01] | [![S]][01] |  
|  0002  | [dSTATIC_ASSERT][02]       | [![S]][02] | [![S]][02] | [![S]][02] | [![S]][02]  | [![S]][02]  | [![S]][02] | [![S]][02] |  
|  0003  | [dSTATIC_CHECK][03]        | [![S]][03] | [![S]][03] | [![S]][03] | [![S]][03]  | [![S]][03]  | [![S]][03] | [![S]][03] |  
|  0004  | [dCAN_DELETE_FUNCTION][04] | [![S]][04] | [![S]][04] | [![S]][04] | [![S]][04]  | [![S]][04]  | [![S]][04] | [![S]][04] |  
|  0005  | [dNOCOPYABLE][05]          | [![S]][05] | [![S]][05] | [![S]][05] | [![S]][05]  | [![S]][05]  | [![S]][05] | [![S]][05] |  
|  0006  | [dHAS_NOEXCEPT][06]        | [![S]][06] | [![S]][06] | [![S]][06] | [![S]][06]  | [![S]][06]  | [![S]][06] | [![S]][06] |  
|  0007  | [dNOEXCEPT][07]            | [![S]][07] | [![S]][07] | [![S]][07] | [![S]][07]  | [![S]][07]  | [![S]][07] | [![S]][07] |  
|  0008  | [dHAS_NULLPTR][08]         | [![S]][08] | [![S]][08] | [![S]][08] | [![S]][08]  | [![S]][08]  | [![S]][08] | [![S]][08] |  
|  0009  | [dHAS_TYPE_TRAITS][09]     | [![S]][09] | [![S]][09] | [![S]][09] | [![S]][09]  | [![S]][09]  | [![S]][09] | [![S]][09] |  
|  0010  | [dTRAIT][10]               | [![S]][10] | [![S]][10] | [![S]][10] | [![S]][10]  | [![S]][10]  | [![S]][10] | [![S]][10] |  
|  0011  | [dHAS_DECLTYPE][11]        | [![S]][11] | [![S]][11] | [![S]][11] | [![S]][11]  | [![S]][11]  | [![S]][11] | [![S]][11] |  
|  0012  | [dHAS_LAMBDA][12]          | [![S]][12] | [![S]][12] | [![S]][12] | [![S]][12]  | [![S]][12]  | [![S]][12] | [![S]][12] |  
|  0013  | [dHAS_HASH][13]            | [![S]][13] | [![S]][13] | [![S]][13] | [![S]][13]  | [![S]][13]  | [![S]][13] | [![S]][13] |  
|  0014  | [dHAS_CSTDINT][14]         | [![S]][14] | [![S]][14] | [![S]][14] | [![S]][14]  | [![S]][14]  | [![S]][14] | [![S]][14] |  

<br/>

[M]: #main  "определяет технические возможности компилятора"
[MINGW]:  #main  "поддержка компиляторов mingw"
[VS-NEW]: #main  "поддержка новых компиляторов msvc"
[VS-OLD]: #main  "поддержка старых компиляторов msvc"

[00]: #dHAS_ATOMIC
[01]: #dHAS_STATIC_ASSERT
[02]: #dSTATIC_ASSERT
[03]: #dSTATIC_CHECK
[04]: #dCAN_DELETE_FUNCTION
[05]: #dNOCOPYABLE
[06]: #dHAS_NOEXCEPT
[07]: #dNOEXCEPT
[08]: #dHAS_NULLPTR
[09]: #dHAS_TYPE_TRAITS
[10]: #dTRAIT
[11]: #dHAS_DECLTYPE
[12]: #dHAS_LAMBDA
[13]: #dHAS_HASH
[14]: #dHAS_CSTDINT

dHAS_ATOMIC
-----------
Если определен, значит компилятору доступны стандартные заголовки:  
```
    #include <atomic>
    #include <future>
    #include <thread>
    #include <mutex>
```

dHAS_STATIC_ASSERT
------------------
[ST]: https://en.cppreference.com/w/cpp/language/static_assert

Если компилятор поддерживает [static_assert][ST],  
тогда макрос определен и равен 1  

Пример:  

```
    enum { value = 1 };

    #if dHAS_STATIC_ASSERT
        static_assert(value, "'static_assert' not worked");
    #endif

```

dSTATIC_ASSERT
--------------
Реализует `static_assert`  
Определен всегда, и для всех компиляторов.  
Для новых компиляторов используется стандартный [static_assert][ST]  
Для старых компиляторов используется хитроумная самоделка.  
Особенность самоделки: макрос можно использовать как внутри функций,  
так и в глоабальной области.  

```
namespace
{
    enum { value = 1 };

    dSTATIC_ASSERT(
        STATIC_ASSERT_NOT_WORKED, 
        value
    );

} // namespace
```

dSTATIC_CHECK
-------------
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

dHAS_NULLPTR
------------
[NIL]: https://en.cppreference.com/w/cpp/language/nullptr

Если компилятор поддерживает [nullptr][NIL],  
тогда макрос определен и равен 1  

```
#ifdef dHAS_NULLPTR
    void bar(std::nullptr_t p)
    {
        void* a = p;
        ASSERT_TRUE(p == 0);
        ASSERT_TRUE(!a);
    }

    void foo()
    {
        bar(nullptr);
    }

#endif
```

dHAS_TYPE_TRAITS
----------------
[TR]: https://en.cppreference.com/w/cpp/header/type_traits

Если компилятору доступен стандартный заголовок [`<type_traits>`][TR],  
тогда макрос определен и равен 1  

dTRAIT
------
Если компилятору доступен стандартный заголовок [`<type_traits>`][TR],  
Тогда макрос раскрывается в значение `std`.  
А иначе - раскрывается в значение `tools`.  

dHAS_DECLTYPE
-------------
[DCL]: https://en.cppreference.com/w/cpp/language/decltype

Если компилятору доступен спецификатор [decltype][DCL],  
тогда макрос определен и равен 1  

dHAS_LAMBDA
-----------
[LA]: https://en.cppreference.com/w/cpp/language/lambda

Если компилятору доступны [лямбды][LA],  
тогда макрос определен и равен 1  

dHAS_HASH
---------
[HA]: https://en.cppreference.com/w/cpp/utility/hash

Если компилятору доступен стандартный заголовок [`<hash>`][HA],  
тогда макрос определен и равен 1  

dHAS_CSTDINT
------------
[CSTDINT]: https://en.cppreference.com/w/cpp/header/cstdint

Если компилятору доступен стандартный заголовок [`<cstdint>`][CSTDINT],  
тогда макрос определен и равен 1  

<br/>

История изменений
-----------------

ver-0.0.2 [![2021y-05m-21d 02:00:00]][R0002]  
ver-0.0.1 [![2021y-05m-19d 23:00:00]][R0001]  
ver-0.0.0 [![2021y-05m-18d 23:15:00]][R0000]  

[2021y-05m-21d 02:00:00]: https://img.shields.io/static/v1?label=2021y-05m-21d&message=02:00:00&color=yellowgreen
[2021y-05m-19d 23:00:00]: https://img.shields.io/static/v1?label=2021y-05m-19d&message=23:00:00&color=yellowgreen
[2021y-05m-18d 23:15:00]: https://img.shields.io/static/v1?label=2021y-05m-18d&message=23:15:00&color=yellowgreen

[R0002]: history.md/#v002
[R0001]: history.md/#v001
[R0000]: history.md/#v000

--------------------------------------------

1) [История](history.md)  


