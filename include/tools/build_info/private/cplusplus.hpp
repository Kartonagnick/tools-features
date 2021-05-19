// [2021y-06m-18d][22:50:00] Idrisov Denis R. 001
// [2021y-06m-15d][00:05:00] Idrisov Denis R. 001 PRE
#pragma once
#ifndef dTOOLS_BI_CPLUSPLUS_USED_ 
#define dTOOLS_BI_CPLUSPLUS_USED_ 001

#include "../dmessage.hpp"

//==============================================================================
//==============================================================================

#ifdef __cplusplus
    dPRAGMA_MESSAGE("__cplusplus: " dSSTRINGIZE(__cplusplus)) 

    #if __cplusplus >= 202002L
        dPRAGMA_MESSAGE("c++20: enabled") 
    #elif __cplusplus >= 201703L
        dPRAGMA_MESSAGE("c++17: enabled") 
    #elif __cplusplus >= 201402L
        dPRAGMA_MESSAGE("c++14: enabled") 
    #elif __cplusplus >= 201103L
        dPRAGMA_MESSAGE("c++11: enabled") 
    #else
        dPRAGMA_MESSAGE("c++old: enabled") 
    #endif
#else
    dPRAGMA_MESSAGE("__cplusplus: not specified") 
#endif

//==============================================================================
//==============================================================================
#endif // dTOOLS_BI_CPLUSPLUS_USED_
