// [2021y-05m-18d][22:27:01] Idrisov Denis R.  
// [2021y-05m-18d][22:27:01] birthday of the project  
#pragma once
//==============================================================================
//==============================================================================

#if defined(_MSC_VER) && !defined(WIN32_LEAN_AND_MEAN)
    #define WIN32_LEAN_AND_MEAN
#endif

//==============================================================================
//=== [pch] ====================================================================

#define dPCH_USED 1
#include <tools/build_info/build_info.hpp>
#include <tools/features.ver>
dSHOW_BUILD("[test]", dTOOLS_FEATURES)

//==============================================================================
//==============================================================================

#include <mygtest/mygtest.hpp>
#include <stdexcept>
#include <cassert>

//==============================================================================
//==============================================================================
