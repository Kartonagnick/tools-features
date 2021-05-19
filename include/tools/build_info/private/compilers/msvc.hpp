// [2021y-06m-18d][22:50:00] Idrisov Denis R. 001
// [2021y-06m-15d][00:05:00] Idrisov Denis R. 001 PRE
#pragma once
#ifndef dTOOLS_BI_MSVC_USED_ 
#define dTOOLS_BI_MSVC_USED_ 001

#ifndef _MSC_VER
    #error expected msvc compiler
#endif

//==============================================================================
//==============================================================================

#if _MSC_VER > 1929 
    #error it is necessary to add data about the new compiler
#elif _MSC_VER >= 1920 && _MSC_VER <= 1929 
    #define dCOMPILER_TAG msvc2019
#elif _MSC_VER >= 1910 && _MSC_VER <= 1916 
    #define dCOMPILER_TAG msvc2017
#elif _MSC_VER == 1900 
    #define dCOMPILER_TAG msvc2015
#elif _MSC_VER == 1800
    #define dCOMPILER_TAG msvc2013
#elif _MSC_VER == 1700
    #define dCOMPILER_TAG msvc2012
#elif _MSC_VER == 1600
    #define dCOMPILER_TAG msvc2010
#elif _MSC_VER == 1500
    #define dCOMPILER_TAG msvc2008
#elif _MSC_VER == 1400
    #define dCOMPILER_TAG msvc2005
#elif _MSC_VER == 1310
    #define dCOMPILER_TAG msvc2003
#elif _MSC_VER == 1300
    #define dCOMPILER_TAG msvc2002
#elif _MSC_VER == 1200
    #define dCOMPILER_TAG msvc60
#elif _MSC_VER == 1200
    #define dCOMPILER_TAG msvc60
#elif _MSC_VER == 1100
    #define dCOMPILER_TAG msvc50
#elif _MSC_VER == 1020
    #define dCOMPILER_TAG msvc42
#elif _MSC_VER == 1010
    #define dCOMPILER_TAG msvc41
#elif _MSC_VER == 1000
    #define dCOMPILER_TAG msvc40
#elif _MSC_VER == 900
    #define dCOMPILER_TAG msvc20
#elif _MSC_VER == 800
    #define dCOMPILER_TAG msvc10
#elif _MSC_VER == 700
    #define dCOMPILER_TAG msvc7
#elif _MSC_VER == 600
    #define dCOMPILER_TAG msvc6
#else
    #error too old msvc not support
#endif

//==============================================================================
//==============================================================================

#if _MSC_VER > 1929 
    #error it is necessary to add data about the new compiler

//==============================================================================
//=== msvc2019 =================================================================

#elif _MSC_VER == 1929 

    #if _MSC_FULL_VER == 192930038
        #define dCOMPILER_VER 16.10.3
    #elif _MSC_FULL_VER == 192930037
        #define dCOMPILER_VER 16.10.1
    #else
        #define dCOMPILER_VER 16.10.? (WARNING)
    #endif

#elif _MSC_VER == 1928 
    #if _MSC_FULL_VER == 192829915
        #define dCOMPILER_VER 16.9.5 (6)
    #elif _MSC_FULL_VER == 192829913
        #define dCOMPILER_VER 16.9.2
    #elif _MSC_FULL_VER == 192829912
        #define dCOMPILER_VER 16.9.1
    #elif _MSC_FULL_VER == 192829334
        #define dCOMPILER_VER 16.8.1
    #elif _MSC_FULL_VER == 192829333
        #define dCOMPILER_VER 16.8.1
    #else
        #define dCOMPILER_VER 16.8 or 16.9 (WARNING)
    #endif

#elif _MSC_VER == 1927 
    #if _MSC_FULL_VER == 192729112
        #define dCOMPILER_VER 16.7
    #else
        #define dCOMPILER_VER 16.7 (WARNING)
    #endif

#elif _MSC_VER == 1926 
    #if _MSC_FULL_VER == 192628806
        #define dCOMPILER_VER 16.6.2
    #else
        #define dCOMPILER_VER 16.6.2 (WARNING)
    #endif

#elif _MSC_VER == 1925 
    #if _MSC_FULL_VER == 192528611
        #define dCOMPILER_VER 16.5.1
    #else
        #define dCOMPILER_VER 16.5.1 (WARNING)
    #endif

#elif _MSC_VER == 1924 
    #if _MSC_FULL_VER == 192428314
        #define dCOMPILER_VER 16.4.0
    #else
        #define dCOMPILER_VER 16.4.0 (WARNING)
    #endif

#elif _MSC_VER == 1923 
    #if _MSC_FULL_VER == 192328105
        #define dCOMPILER_VER 16.3.2
    #else
        #define dCOMPILER_VER 16.3.2 (WARNING)
    #endif

#elif _MSC_VER == 1922 
    #if _MSC_FULL_VER == 192227905
        #define dCOMPILER_VER 16.2.3
    #else
        #define dCOMPILER_VER 16.2.3 (WARNING)
    #endif

#elif _MSC_VER == 1921 
    #if _MSC_FULL_VER == 192127702
        #define dCOMPILER_VER 16.1.2
    #else
        #define dCOMPILER_VER 16.1.2 (WARNING)
    #endif

#elif _MSC_VER == 1920 
    #if _MSC_FULL_VER == 192027508
        #define dCOMPILER_VER RTW-16.0.0
    #else
        #define dCOMPILER_VER RTW-16.0.0 (WARNING)
    #endif

//==============================================================================
//=== msvc2017 =================================================================

#elif _MSC_VER == 1916 
    #if _MSC_FULL_VER == 191627045
        #define dCOMPILER_VER 15.9.36
    #elif _MSC_FULL_VER == 191627045
        #define dCOMPILER_VER 15.9.35 (36)
	#elif _MSC_FULL_VER == 191627034
        #define dCOMPILER_VER 15.9.17
    #elif _MSC_FULL_VER == 191627030
        #define dCOMPILER_VER 15.9.11
    #elif _MSC_FULL_VER == 191627027
        #define dCOMPILER_VER 15.9.7
    #elif _MSC_FULL_VER == 191627026
        #define dCOMPILER_VER 15.9.5
    #elif _MSC_FULL_VER == 191627025
        #define dCOMPILER_VER 15.9.4
    #elif _MSC_FULL_VER == 191627023
        #define dCOMPILER_VER 15.9.1
    #else
        #define dCOMPILER_VER 15.9.? (WARNING)
    #endif

#elif _MSC_VER == 1915 
    #define dCOMPILER_VER 15.8
#elif _MSC_VER == 1914 
    #if _MSC_FULL_VER == 191426433
        #define dCOMPILER_VER 15.7.5
    #elif _MSC_FULL_VER == 191426429
        #define dCOMPILER_VER 15.7.2
    #elif _MSC_FULL_VER == 191426428
        #define dCOMPILER_VER 15.7.1
    #else
        #define dCOMPILER_VER 15.7.? (WARNING)
    #endif

#elif _MSC_VER == 1913 
    #if _MSC_FULL_VER == 191326132
        #define dCOMPILER_VER 15.6.7
    #elif _MSC_FULL_VER == 191326131
        #define dCOMPILER_VER 15.6.6
    #elif _MSC_FULL_VER == 191326129
        #define dCOMPILER_VER 15.6.4
    #elif _MSC_FULL_VER == 191326128
        #define dCOMPILER_VER 15.6.0
    #else
        #define dCOMPILER_VER 15.6.? (WARNING)
    #endif

#elif _MSC_VER == 1912 
    #if _MSC_FULL_VER == 191225835
        #define dCOMPILER_VER 15.5.7
    #elif _MSC_FULL_VER == 191225834
        #define dCOMPILER_VER 15.5.3
    #elif _MSC_FULL_VER == 191225831
        #define dCOMPILER_VER 15.5.2
    #else
        #define dCOMPILER_VER 15.5.? (WARNING)
    #endif

#elif _MSC_VER == 1911 
    #if _MSC_FULL_VER == 191125547
        #define dCOMPILER_VER 15.4.5
    #elif _MSC_FULL_VER == 191125542
        #define dCOMPILER_VER 15.4.4
    #elif _MSC_FULL_VER == 191125507
        #define dCOMPILER_VER 15.3.3
    #else
        #define dCOMPILER_VER 15.3.?
    #endif

#elif _MSC_VER == 1910 
    #if _MSC_FULL_VER == 191025017
        #define dCOMPILER_VER 15.2
    #else
        #define dCOMPILER_VER 15.0.?
    #endif

//==============================================================================
//=== msvc2015 =================================================================

#elif _MSC_VER == 1900 
    #if _MSC_FULL_VER == 190024215
        #define dCOMPILER_VER Update 3 [14.0][1]
    #elif _MSC_FULL_VER == 190024210
        #define dCOMPILER_VER Update 3 [14.0]
    #elif _MSC_FULL_VER == 190023918
        #define dCOMPILER_VER Update 2 [14.0]
    #elif _MSC_FULL_VER == 190023506
        #define dCOMPILER_VER Update 1 [14.0]
    #elif _MSC_FULL_VER == 190023026
        #define dCOMPILER_VER Update [14.0]
    #else
        #define dCOMPILER_VER Update 14.0.?
    #endif

//==============================================================================
//=== msvc2013 =================================================================

#elif _MSC_VER == 1800 
    #if _MSC_FULL_VER == 180021114
        #define dCOMPILER_VER Nobemver CTP [12.0]
    #elif _MSC_FULL_VER == 180040629
        #define dCOMPILER_VER Update 5 [12.0]
    #elif _MSC_FULL_VER == 180031101
        #define dCOMPILER_VER Update 4 [12.0]
    #elif _MSC_FULL_VER == 180030723
        #define dCOMPILER_VER Update 3 [12.0]
    #elif _MSC_FULL_VER == 180030501
        #define dCOMPILER_VER Update 2 [12.0]
    #elif _MSC_FULL_VER == 180030324
        #define dCOMPILER_VER Update2 RC [12.0]
    #elif _MSC_FULL_VER == 180021005
        #define dCOMPILER_VER [12.0]
    #elif _MSC_FULL_VER == 180020827
        #define dCOMPILER_VER RC [12.0]
    #elif _MSC_FULL_VER == 180020617
        #define dCOMPILER_VER RC Preview [12.0]
    #else
        #define dCOMPILER_VER 12.0.? (WARNING)
    #endif

//==============================================================================
//=== msvc2012 =================================================================

#elif _MSC_VER == 1700 
    #if _MSC_FULL_VER == 170051025
        #define dCOMPILER_VER November CTP [11.0]
    #elif _MSC_FULL_VER == 170061030
        #define dCOMPILER_VER Update 4 [11.0]
    #elif _MSC_FULL_VER == 170060610
        #define dCOMPILER_VER Update 3 [11.0]
    #elif _MSC_FULL_VER == 170060315
        #define dCOMPILER_VER Update 2 [11.0]
    #elif _MSC_FULL_VER == 170051106
        #define dCOMPILER_VER Update 1 [11.0]
    #elif _MSC_FULL_VER == 170050727
        #define dCOMPILER_VER [11.0]
    #else
        #define dCOMPILER_VER 11.0.? (WARNING)
    #endif

//==============================================================================
//=== msvc2010 =================================================================

#elif _MSC_VER == 1600 
    #if _MSC_FULL_VER == 160040219
        #define dCOMPILER_VER SP1 [10.0]
    #elif _MSC_FULL_VER == 160030319
        #define dCOMPILER_VER [10.0]
    #elif _MSC_FULL_VER == 160021003
        #define dCOMPILER_VER Beta 2 [10.0]
    #elif _MSC_FULL_VER == 160020506
        #define dCOMPILER_VER Beta 1 [10.0]
    #else
        #define dCOMPILER_VER Beta 10.0.? (WARNING)
    #endif

//==============================================================================
//=== msvc2008 =================================================================

#elif _MSC_VER == 1500 
    #if _MSC_FULL_VER == 150030729
        #define dCOMPILER_VER SP1 [9.0]
    #elif _MSC_FULL_VER == 150021022
        #define dCOMPILER_VER [9.0]
    #elif _MSC_FULL_VER == 150020706
        #define dCOMPILER_VER Beta 2 [9.0]
    #else
        #define dCOMPILER_VER 9.0.? (WARNING)
    #endif

//==============================================================================
//=== msvc2005 =================================================================

#elif _MSC_VER == 1400 
    #if _MSC_FULL_VER == 140050727
        #define dCOMPILER_VER SP1 [8.0]
    #elif _MSC_FULL_VER == 140050320
        #define dCOMPILER_VER [8.0]
    #elif _MSC_FULL_VER == 140050215
        #define dCOMPILER_VER Beta 2 [8.0]
    #elif _MSC_FULL_VER == 140040607
        #define dCOMPILER_VER Beta 1 [8.0]
    #elif _MSC_FULL_VER == 140040310
        #define dCOMPILER_VER 2003 SP1 DDK (for AMD64)
    #else
        #define dCOMPILER_VER msvc2005: 8.0.?
    #endif

//==============================================================================
//=== msvc2003 =================================================================

#elif _MSC_VER == 1310 
    #if _MSC_FULL_VER == 13106030
        #define dCOMPILER_VER 2003 SP1 [7.1]
    #elif _MSC_FULL_VER == 13104035
        #define dCOMPILER_VER Windows Server 2003 SP1 DDK
    #elif _MSC_FULL_VER == 13103077
        #define dCOMPILER_VER 2003 [7.1]
    #elif _MSC_FULL_VER == 13103052
        #define dCOMPILER_VER Toolkit 2003 [7.1]
    #elif _MSC_FULL_VER == 13102292
        #define dCOMPILER_VER 2003 Beta [7.1]
    #elif _MSC_FULL_VER == 13102179
        #define dCOMPILER_VER 2003 DDK
    #else
        #define dCOMPILER_VER .NET 7.1.? (WARNING)
    #endif

//==============================================================================
//=== msvc2002 =================================================================

#elif _MSC_VER == 1300 
    #if _MSC_FULL_VER == 13009466
        #define dCOMPILER_VER 2002 [7.0]
    #elif _MSC_FULL_VER == 13009176
        #define dCOMPILER_VER SP1 DDK
    #else
        #define dCOMPILER_VER 7.0.? (WARNING)
    #endif

//==============================================================================
//=== msvc60 ===================================================================

#elif _MSC_VER == 1200 
    #if _MSC_FULL_VER == 12008804
        #define dCOMPILER_VER 6.0 SP5
    #else
        #define dCOMPILER_VER 6.0.? (WARNING)
    #endif

//==============================================================================
//=== msvc-old =================================================================

#elif _MSC_VER == 1100 
    // msvc5.0 5.0
    #define dCOMPILER_VER 5.0
#elif _MSC_VER == 1020 
    // msvc42 4.2
    #define dCOMPILER_VER 4.2
#elif _MSC_VER == 1010 
    // msvc41 4.1
    #define dCOMPILER_VER 4.1
#elif _MSC_VER == 1000 
    // msvc41 4.0
    #define dCOMPILER_VER 4.0
#elif _MSC_VER == 900 
    // msvc41 2.0
    #define dCOMPILER_VER 2.0
#elif _MSC_VER == 800 
    // msvc10 1.0
    #define dCOMPILER_VER 1.0
#elif _MSC_VER == 700 
    // msvc7 7.0
    #define dCOMPILER_VER msvc7-7.0
#elif _MSC_VER == 600 
    // msvc6 6.0 (pure-c only)
    #define dCOMPILER_VER msvc6-6.0 (pure-c only)
#else
    #error too old msvc not support
#endif

//==============================================================================
//=== ADDRESS-MODEL ============================================================

#ifdef _WIN64
    #define dX64 1
#else
    #define dX32 1
#endif

//==============================================================================
//=== RUNTIME-C++ ==============================================================

#ifdef NDEBUG
    #ifdef _DLL
        #define dCRT_VAL 1 // MD
    #else
        #define dCRT_VAL 2 // MT
    #endif
#else
    #ifdef _DLL
        #define dCRT_VAL 3 // MDd
    #else
        #define dCRT_VAL 4 // MTd
    #endif
#endif

//==============================================================================
//=== SHOW CONFIG-DATA =========================================================

#ifndef dHIDE_MSVC_MESSAGE

    #include "../../dmessage.hpp"

    #pragma message(dSSTRINGIZE(dCOMPILER_TAG) " .......... " dSSTRINGIZE(dCOMPILER_VER))

    #pragma message("_MSC_FULL_VER ..... " dSSTRINGIZE(_MSC_FULL_VER))

    #ifdef _MSVC_LANG
        #pragma message("_MSVC_LANG ........ " dSSTRINGIZE(_MSVC_LANG))
    #else
        #pragma message("_MSVC_LANG ........ not specified")
    #endif

    #if defined(_MSC_EXTENSIONS) && _MSC_EXTENSIONS != 0
        #pragma message("_MSC_EXTENSIONS ... enabled")
    #else
        #pragma message("_MSC_EXTENSIONS ... disabled")
    #endif

#endif // !dHIDE_MSVC_MESSAGE

//==============================================================================
//==============================================================================
#endif // dTOOLS_BI_MSVC_USED_

