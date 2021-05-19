// [2021y-06m-18d][22:50:00] Idrisov Denis R. 001
// [2021y-06m-15d][00:05:00] Idrisov Denis R. 001 PRE
#pragma once
#ifndef dTOOLS_BI_MINGW_USED_
#define dTOOLS_BI_MINGW_USED_ 001
//==============================================================================
//==============================================================================

#if !defined(dX64) && !defined(dX32)
    #error unknown address-model
#endif

#if !defined(dCRT_VAL)
    #error unknown runtime-c++
#endif

#ifndef __GNUC__
    #error not specified: __GNUC__
#endif

// __GNUC__            - MAJOR
// __GNUC_MINOR__      - MINOR
// __GNUC_PATCHLEVEL__ - PATCH

#define dCOMPILER_INT (__GNUC__ * 10000  + __GNUC_MINOR__ * 100  + __GNUC_PATCHLEVEL__)
#define dCOMPILER_VER __GNUC__.__GNUC_MINOR__.__GNUC_PATCHLEVEL__
#define dCOMPILER_TAG mingw

// example: 
#if dCOMPILER_INT > 30200
    // 3.2.X
#endif

//==============================================================================
//=== SHOW CONFIG-DATA =========================================================

#ifndef dHIDE_MINGW_MESSAGE

    #include "../../dmessage.hpp"
    #pragma message("mingw: " dSSTRINGIZE(dCOMPILER_VER))

#endif // !dHIDE_MINGW_MESSAGE

//==============================================================================
//==============================================================================
#endif // !dTOOLS_BI_MINGW_USE
