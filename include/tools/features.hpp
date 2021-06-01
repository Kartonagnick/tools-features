// [2020y-06m-01d][11:15:00] Idrisov Denis R. 003 PRE
// [2020y-05m-21d][02:00:00] Idrisov Denis R. 002
// [2020y-05m-19d][23:00:00] Idrisov Denis R. 001
#pragma once
#ifndef dTOOLS_FEATURES_USED_
#define dTOOLS_FEATURES_USED_ 3

//==============================================================================
//=== dHAS_NULLPTR =============================================================

#if defined(__GNUC__) && __GNUC__ * 10 + __GNUC_MINOR__ >= 46
    #define dHAS_NULLPTR 1
#endif

#if __cplusplus >= 201103L
    #define dHAS_NULLPTR 1
#endif

#ifdef dHAS_NULLPTR
    typedef decltype(nullptr) nullptr_t;
#endif

//==============================================================================
//=== msvc2010 =================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1600
    // msvc2010 (or newer)

    // [WARNING] msvc2010 has bug with reference
    // bug: can be "std::tr1::_Remove_reference<_Ty&&>"
    // bug: or "std::tr1::_Remove_reference<_Ty&>"
    #define dHAS_TYPE_TRAITS 1

    #define dHAS_DECLTYPE 1
    #define dHAS_NULLPTR 1
    #define dHAS_LAMBDA 1
    #define dHAS_HASH 1
#endif

//==============================================================================
//=== dTRAIT ===================================================================

#ifdef dHAS_TYPE_TRAITS
    #define dTRAIT std
#else
    #define dTRAIT tools
#endif

//==============================================================================
//=== dSTATIC_ASSERT ===========================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1600
    // msvc2010 (or newer)
    #define dHAS_CSTDINT 1
    #define dHAS_STATIC_ASSERT 1

    #define dSTATIC_ASSERT(msg, ...) \
        static_assert((__VA_ARGS__), #msg)

    #define dSTATIC_CHECK(msg, ...)  \
        static_assert((__VA_ARGS__), #msg)

#else

    #define dSTATIC_ASSERT_3(msg, ...) \
        struct msg { int static_assert_ : !!(__VA_ARGS__); }

    #define dSTATIC_ASSERT_2(msg, L, C, ...)  \
        dSTATIC_ASSERT_3(msg##_##L##_##C , __VA_ARGS__)

    #define dSTATIC_ASSERT_1(msg, L, C, ...) \
        dSTATIC_ASSERT_2(msg, L, C, __VA_ARGS__)

    #define dSTATIC_ASSERT(msg, ...) \
        dSTATIC_ASSERT_1(msg, __LINE__, __COUNTER__, __VA_ARGS__)

    
    template<bool> struct static_assert_;
    template<> struct static_assert_<true> {};

    #define dSTATIC_CHECK(msg, ...)          \
    {                                        \
        ::static_assert_<(__VA_ARGS__)> msg; \
        (void) msg;                          \
    } void()

#endif

//==============================================================================
//=== dHAS_ATOMIC ==============================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1700
    // msvc2012 (or newer)
    #define dHAS_ATOMIC 1
#endif

//==============================================================================
//=== dCAN_DELETE_FUNCTION =====================================================

#if (defined(_MSC_VER) && _MSC_VER >= 1800) || __cplusplus >= 201103L
    // msvc2013 (or newer) or c++11 (or newer)
    #define dCAN_DELETE_FUNCTION 1
#endif

#ifdef dCAN_DELETE_FUNCTION
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

#ifdef __GXX_EXPERIMENTAL_CXX0X__
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
#endif // dTOOLS_FEATURES_USED_
