// [2020y-05m-19d][00:00:00] Idrisov Denis R. 001 PRE
#pragma once
#ifndef dTOOLS_FEATURES_USED_
#define dTOOLS_FEATURES_USED_ 1 PRE

//==============================================================================
//=== dHAS_RVALUE_REFERENCES/dHAS_ATOMIC =======================================

#if !defined(_MSC_VER) || _MSC_VER >= 1700
    // msvc2012 (or newer)
    #define dHAS_ATOMIC 1
#endif

#if !defined(_MSC_VER) || _MSC_VER >= 1600
    // msvc2010 (or newer)

    #define dSTATIC_CHECK(msg, ...)  \
        static_assert((__VA_ARGS__), #msg)
#else
    template<bool> struct static_assert_;
    template<> struct static_assert_<true> {};

    #define dSTATIC_CHECK(msg, ...)          \
    {                                        \
        ::static_assert_<(__VA_ARGS__)> msg; \
        (void) msg;                          \
    } void()
#endif

//==============================================================================
//=== dHAS_DELETING_FUNCTIONS ==================================================

#if (defined(_MSC_VER) && _MSC_VER >= 1800) || __cplusplus >= 201103L
    // msvc2013 (or newer) or c++11 (or newer)
    #define dHAS_DELETING_FUNCTIONS 1
#endif

#ifdef dHAS_DELETING_FUNCTIONS
    #define dNOCOPYABLE(Class)                   \
        Class(const Class&)            = delete; \
        Class(Class&&)                 = delete; \
        Class& operator=(const Class&) = delete; \
        Class& operator=(Class&&)      = delete
#else
    #define dNOCOPYABLE(Class) \
        Class(const Class&);   \
        Class& operator=(const Class&)
#endif

//==============================================================================
//=== dNOEXCEPT ================================================================

#ifdef __clang__
    #if __has_feature(cxx_noexcept)
        #define dHAS_NOEXCEPT 1
    #endif
#endif

#ifdef__GXX_EXPERIMENTAL_CXX0X__
    #if __GNUC__ * 10 + __GNUC_MINOR__ >= 46
        #define dHAS_NOEXCEPT 1
    #endif
#endif

#ifdef _MSC_FULL_VER 
    #if _MSC_FULL_VER >= 190023026
        // msvc2015 (or newer)
        #define dHAS_NOEXCEPT 1
    #endif
#endif
                
#ifdef dHAS_NOEXCEPT
    #define dNOEXCEPT noexcept
#else
    #define dNOEXCEPT throw()
#endif

//==============================================================================
//==============================================================================
#endif // !dTOOLS_FEATURES_USED_
