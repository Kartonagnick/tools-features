// [2021y-06m-18d][22:50:00] Idrisov Denis R. 001
// [2021y-06m-15d][00:05:00] Idrisov Denis R. 001 PRE
#pragma once
#ifndef dTOOLS_BI_COMPILERS_USED_ 
#define dTOOLS_BI_COMPILERS_USED_ 001

//==============================================================================
//=== dCOMPILR =================================================================

#if defined(_MSC_VER)
    #define dMSVC_COMPILER 1

#elif defined(__clang__)
    #define dCLANG_COMPILER 1

#elif defined(__MINGW__) || defined(__MINGW32__) || defined(__MINGW64__)
    #define dMINGW_COMPILER 1

#elif defined(__GNUC__) || defined(__GNUG__)
    #define dGCC_COMPILER 1

#else
    #error UNKNOWN COMPILER

#endif

//==============================================================================
//==============================================================================
#endif // !dTOOLS_BI_COMPILERS_USED_
