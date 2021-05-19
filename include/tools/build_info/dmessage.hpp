// [2021y-06m-18d][22:50:00] Idrisov Denis R. 001
// [2021y-06m-15d][00:05:00] Idrisov Denis R. 001 PRE
#pragma once
#ifndef dTOOLS_BI_DMESSAGE_USED_ 
#define dTOOLS_BI_DMESSAGE_USED_ 001

#include "private/compilers.hpp"

//==============================================================================
//=== dSTRINGIZE ===============================================================

#define dSTRINGIZE(...) #__VA_ARGS__
#define dSSTRINGIZE(x) dSTRINGIZE(x)

//==============================================================================
//=== dCOMPILER_MESSAGE ========================================================

#if defined(_MSC_VER)
    #define dCOMPILER_MESSAGE(...)  __pragma(message(__VA_ARGS__))
#else
    #define dCOMPILER_MESSAGE(...)  _Pragma(dSSTRINGIZE(message __VA_ARGS__))
#endif

//==============================================================================
//=== dPRAGMA_MESSAGE =================================================================

#if defined(dMSVC_COMPILER) && !defined(dHIDE_MSVC_MESSAGE)
    #define dPRAGMA_MESSAGE(...) dCOMPILER_MESSAGE(__VA_ARGS__)

#elif defined(dMINGW_COMPILER) && !defined(dHIDE_MINGW_MESSAGE)
    #define dPRAGMA_MESSAGE(...) dCOMPILER_MESSAGE(__VA_ARGS__)

#elif defined(dGCC_COMPILER) && !defined(dHIDE_GCC_MESSAGE)
    #define dPRAGMA_MESSAGE(...) dCOMPILER_MESSAGE(__VA_ARGS__)

#elif defined(dCLANG_COMPILER) && !defined(dHIDE_CLANG_MESSAGE)
    #define dPRAGMA_MESSAGE(...) dCOMPILER_MESSAGE(__VA_ARGS__)

#else
    #define dPRAGMA_MESSAGE(...)
#endif

//==============================================================================
//==============================================================================
#endif // !dTOOLS_BI_DMESSAGE_USED_
