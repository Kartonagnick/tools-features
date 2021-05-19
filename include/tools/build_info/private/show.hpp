// [2021y-06m-18d][22:50:00] Idrisov Denis R. 001
// [2021y-06m-15d][00:05:00] Idrisov Denis R. 001 PRE
#pragma once
#ifndef dTOOLS_BI_VIEW_USED_
#define dTOOLS_BI_VIEW_USED_ 001
//================================================================================
//================================================================================

#define dSTRINGIZE(...) #__VA_ARGS__
#define dSSTRINGIZE(x) dSTRINGIZE(x)

#ifndef dTOOLS_BI_SELECT_USED_
    #error "select.hpp" must be included first
#endif

#include "../dmessage.hpp"

#define dSHOW_BI_VERSION(x, n) dPRAGMA_MESSAGE(x " " dFULL_ABOUT_ME(n))

#ifdef dPCH_USED
    #define dSHOW_BI_PCH(x) dPRAGMA_MESSAGE(x " enabled -> pch")
#else
    #define dSHOW_BI_PCH(x) dPRAGMA_MESSAGE(x " disabled -> pch")
#endif

#ifdef STABLE_RELEASE
    #ifdef NDEBUG
        #define dSHOW_BI_STABLE(x) dPRAGMA_MESSAGE(x " STABLE-RELEASE")
    #else
        #define dSHOW_BI_STABLE(x) dPRAGMA_MESSAGE(x " STABLE-DEBUG")
    #endif
#else
    #ifdef NDEBUG
        #define dSHOW_BI_STABLE(x) dPRAGMA_MESSAGE(x " UNSTABLE-RELEASE")
    #else
        #define dSHOW_BI_STABLE(x) dPRAGMA_MESSAGE(x " UNSTABLE-DEBUG")
    #endif
#endif

#ifdef dCRT_VAL
    #if dCRT_VAL == 1
        #define dSHOW_BI_CRT(x) dPRAGMA_MESSAGE(x " MD (release-dynamic runtime c++)")
    #elif dCRT_VAL == 2
        #define dSHOW_BI_CRT(x) dPRAGMA_MESSAGE(x " MT (release-static runtime c++)")
    #elif dCRT_VAL == 3
        #define dSHOW_BI_CRT(x) dPRAGMA_MESSAGE(x " MDd (debug-dynamic runtime c++)")
    #elif dCRT_VAL == 4
        #define dSHOW_BI_CRT(x) dPRAGMA_MESSAGE(x " MTd (debug-static runtime c++)")
    #else
        #error unknown runtime c++
    #endif
#else
    #error unknown runtime c++
#endif

#define dSHOW_BUILD(title, name) \
    dSHOW_BI_PCH(title)          \
    dSHOW_BI_STABLE(title)       \
    dSHOW_BI_CRT(title)          \
    dSHOW_BI_VERSION(title, name)

//================================================================================
//================================================================================
#endif // dTOOLS_BI_VIEW_USED_
