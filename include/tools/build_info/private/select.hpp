// [2021y-06m-18d][22:50:00] Idrisov Denis R. 001
// [2021y-06m-15d][00:05:00] Idrisov Denis R. 001 PRE
#pragma once
#ifndef dTOOLS_BI_SELECT_USED_ 
#define dTOOLS_BI_SELECT_USED_ 001

#include "compilers.hpp"

//==============================================================================
//==============================================================================

#if defined(dMSVC_COMPILER)
    #include "compilers/msvc.hpp"
#elif defined(dMINGW_COMPILER)
    #include "compilers/mingw.hpp"
#elif defined(dCLANG_COMPILER)
    #include "compilers/clang.hpp"
#elif defined(dGCC_COMPILER)
    #include "compilers/gcc.hpp"
#else
    #error unknown compiler
#endif

#include "compilers/zfinal.hpp"

//==============================================================================
//==============================================================================
#endif // dTOOLS_BI_SELECT_USED_
