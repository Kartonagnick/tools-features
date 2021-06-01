[M]: #main  "история проекта"
[P]: icons/progress.png
[S]: icons/success.png
[R]: icons/release.png
[B]: icons/bug.png

<a name="main"></a>
**История изменений**  

Основан: 15 февраля 2021г, 22:27:01, Картонажником.  

|      дата     |  время   | день рождения проекта |  
|:-------------:|:--------:|:---------------------:|  
| 2021y-05m-18d | 22:27:01 |    Idrisov Denis R    |  

----------------------------------------------------

<a name="v003"></a>
[![P]][M] **Версия 0.0.3 (предварительная)**
--------------------------------------------

|      дата     |  время   |     ветка     | статус |  
|:-------------:|:--------:|:-------------:|:------:|  
| 2020y-06m-01d | 19:30:00 | [#7-msvc2010] | DONE   |  
| 2020y-06m-01d | 11:15:00 | [#7-msvc2010] | BEGIN  |  

1) upd: инкремент версии:  
     - upd: `features.ver` 003 PRE  
     - upd: `features.hpp` 003 PRE  
       - `dHAS_NULLPTR`  
       - `dHAS_TYPE_TRAITS`  
       - `dHAS_DECLTYPE`  
       - `dHAS_LAMBDA`  
       - `dHAS_HASH`  
       - `dHAS_CSTDINT`  
       - `dHAS_STATIC_ASSERT`  
       - `dSTATIC_ASSERT`  

2) upd: юнит-тесты:  
     - upd: `test/sources/features`:  
       - upd: `test-nocopyable.cpp`     002 PRE  
       - upd: `test-static_check.cpp`   002 PRE  

3) add: юнит-тесты:  
     - add: `test/sources/features`:  
       - add: `test-cstdint.cpp`        001 PRE  
       - add: `test-decltype.cpp`       001 PRE  
       - add: `test-hash.cpp`           001 PRE  
       - add: `test-lambda.cpp`         001 PRE  
       - add: `test-nullptr.cpp`        001 PRE  
       - add: `test-static_assert.cpp`  001 PRE  
       - add: `test-type_traits.cpp`    001 PRE  

3) add: документация:
     - add `docs/table.md` 003 PRE  

[#7-msvc2010]: tasks/2021y-06m-01d-0007-msvc2010.md

--------------------------------------------

<a name="v002"></a>
[![S]][M] **Версия 0.0.2 (предварительная)**
--------------------------------------------
[![R]][R0002] [![2021y-05m-21d 02:00:00]][R0002]  

[2021y-05m-21d 02:00:00]: https://img.shields.io/static/v1?label=2021y-05m-21d&message=02:00:00&color=yellowgreen
[R0002]: changelog.md/#v002

|      дата     |  время   |    ветка    | статус |  
|:-------------:|:--------:|:-----------:|:------:|  
| 2020y-05m-21d | 01:15:00 |  [#5-test]  | DONE   |  
| 2020y-05m-20d | 14:30:00 |  [#5-test]  | BEGIN  |  

1) upd: инкремент версии:  
     - upd: `features.ver` 002  
     - upd: `features.hpp` 002  
       - add: `dHAS_ATOMIC`  
       - add: `dSTATIC_CHECK`  
       - add: `dHAS_DELETING_FUNCTIONS`  
       - add: `dNOCOPYABLE`  
       - add: `dHAS_NOEXCEPT`  
       - add: `dNOEXCEPT`  

2) add: юнит-тесты:  
     - add: `test/sources/features`:  
       - add: `test-atomic.cpp`        001  
       - add: `test-nocopyable.cpp`    001  
       - add: `test-noexcept.cpp`      001  
       - add: `test-static_check.cpp`  001  

3) add: документация:
     - add `docs/table.md` 002  

[#5-test]: tasks/2021y-05m-20d-0005-test.md

--------------------------------------------

<a name="v001"></a>
[![S]][M] **Версия 0.0.1 (предварительная)**
--------------------------------------------
[![R]][R0001] [![2021y-05m-19d 23:00:00]][R0001]  

[2021y-05m-19d 23:00:00]: https://img.shields.io/static/v1?label=2021y-05m-19d&message=23:00:00&color=yellowgreen
[R0001]: changelog.md/#v001

|      дата     |  время   |    ветка    | статус |  
|:-------------:|:--------:|:-----------:|:------:|  
| 2020y-05m-19d | 22:30:00 | [#3-deploy] | DONE   |  
| 2020y-05m-19d | 00:00:00 | [#3-deploy] | BEGIN  |  

1) add: `project.root`  
2) add: `deploy`  

3) add: [build_info v003]  
     - date: [2021y-07m-02d 14:00:00][build_info v003]  

4) add: `tools/features.hpp`     001  
5) add: `tools/features.ver`     001  

6) add: `test`:  
     - add: `test-classic.cpp`   001  
     - add: `test-modern.cpp`    001  

[build_info v003]: https://github.com/Kartonagnick/build_info/blob/master/docs/history.md#v003
[#3-deploy]: tasks/2021y-05m-19d-0003-deploy.md

--------------------------------------------

<a name="v000"></a>
[![S]][M] **Версия 0.0.0 (предварительная)**
--------------------------------------------
[![R]][R0000] [![2021y-05m-18d 23:15:00]][R0000]  

[2021y-05m-18d 23:15:00]: https://img.shields.io/static/v1?label=2021y-05m-18d&message=23:15:00&color=yellowgreen
[R0000]: changelog.md/#v000

|      дата     |  время   |   ветка    | статус |  
|:-------------:|:--------:|:----------:|:------:|  
| 2020y-05m-18d | 23:10:00 | [#1-first] | DONE   |  
| 2020y-05m-18d | 22:40:00 | [#1-first] | BEGIN  |  
 
1) upd: `.gitignore`  
2) upd: `README.md`  
3) upd: `LICENSE`  

4) add: `docs`:  
     - add: `icons`  
     - add: `tasks`  
     - add: `utils`          004  

5) add: `docs`:  
     - add: `history.md`     000  
     - add: `changelog.md`   000  
     - add: `logo.png`       000  

[#1-first]: tasks/2021y-05m-18d-0001-first.md

--------------------------------------------




