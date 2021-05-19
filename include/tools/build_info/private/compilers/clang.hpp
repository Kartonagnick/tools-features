// [2021y-06m-18d][22:50:00] Idrisov Denis R. 001
// [2021y-06m-15d][00:05:00] Idrisov Denis R. 001 PRE
#pragma once
#ifndef dTOOLS_BI_CLANG_USED_
#define dTOOLS_BI_CLANG_USED_ 001
//==============================================================================
//==============================================================================

#if !defined(dX64) && !defined(dX32)
    #error unknown address-model
#endif

#if !defined(dCRT_VAL)
    #error unknown runtime-c++
#endif

// __clang_major__      - MAJOR
// __clang_minor__      - MINOR
// __clang_patchlevel__ - PATCH

#define dCOMPILER_INT (__clang_major__ * 10000  + __clang_minor__ * 100  + __clang_patchlevel__)
#define dCOMPILER_VER __clang_major__.__clang_minor__.__clang_patchlevel__
#define dCOMPILER_TAG clang

// example: 
#if dCOMPILER_INT > 30200
    // 3.2.X
#endif

//==============================================================================
//==============================================================================
#endif // !dTOOLS_BI_CLANG_USED_
