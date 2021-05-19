// [2021y-06m-18d][22:50:00] Idrisov Denis R. 001
// [2021y-06m-15d][00:05:00] Idrisov Denis R. 001 PRE
#pragma once
#ifndef dTOOLS_BI_COMMON_USED_
#define dTOOLS_BI_COMMON_USED_ 001
//==============================================================================
//==============================================================================

#ifdef NDEBUG
    #define dTXT_CONFIG "release"
#else
    #define dTXT_CONFIG "debug"
#endif

#ifdef STABLE_RELEASE
    #define dTXT_STABLE "stable"
#else
    #define dTXT_STABLE "unstable"
#endif

//..............................................................................

#if defined(dX64)
    #define dTXT_AMODEL "x64"
#elif defined(dX32)
    #define dTXT_AMODEL "x86"
#else
    #error address-model not specified
#endif

//..............................................................................

#ifdef dCRT_VAL
    #if dCRT_VAL == 1
        #define dTXT_CRT "MD"
    #elif dCRT_VAL == 2
        #define dTXT_CRT "MT"
    #elif dCRT_VAL == 3
        #define dTXT_CRT "MDd"
    #elif dCRT_VAL == 4
        #define dTXT_CRT "MTd"
    #else
        #error invalid value: dCRT_VAL
    #endif
#else
    #error runtime-c++ not specified
#endif

//==============================================================================
//==============================================================================

#define dSTRINGIZE(...) #__VA_ARGS__
#define dSSTRINGIZE(x) dSTRINGIZE(x)

#define dBASIC_VERSION_NUM(MAJOR, MINOR, PATCH) \
    MAJOR * 100 + MINOR * 10 + PATCH

#define dBASIC_VERSION_STR(MAJOR, MINOR, PATCH) \
    dSSTRINGIZE(MAJOR.MINOR.PATCH)

#define dGET_BASIC_VERSION(NAME) \
    dBASIC_VERSION_STR(NAME##_MAJOR, NAME##_MINOR, NAME##_PATCH)   

#define dABOUT_ME \
    dTXT_AMODEL "-" dTXT_CONFIG "-" dTXT_CRT ", " dTXT_STABLE 

#define dFULL_ABOUT_ME(NAME) dGET_BASIC_VERSION(NAME) ", " dABOUT_ME

//==============================================================================
//==============================================================================
#endif // dTOOLS_BI_COMMON_USED_

// example extract: 
// #define dGET_MAJOR(value)  value / 100
// #define dGET_MINOR(value) (value % 100)/10
// #define dGET_PATHS(value)  value % 10
