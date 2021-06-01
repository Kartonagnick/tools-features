// [2020y-06m-01d][11:15:00] Idrisov Denis R. 003 PRE
// [2021y-03m-10d][13:28:40] Idrisov Denis R.
#include <mygtest/modern.hpp>
//=================================================================================
//=================================================================================

#ifdef TEST_DECLTYPE

#define dTEST_COMPONENT tools, features
#define dTEST_METHOD test_HAS_DECLTYPE
#define dTEST_TAG tdd

#include <tools/features.hpp>

#ifdef dHAS_DECLTYPE
    dPRAGMA_MESSAGE("[test] enabled  -> dHAS_DECLTYPE")

    namespace
    {
        struct {} obj1;
        decltype(obj1) obj2;

    } // namespace

    void unit_test_decltype_123_123_444_234_5678()
    {
        (void) obj2;
    }

#else
    dPRAGMA_MESSAGE("[test] disabled -> dHAS_DECLTYPE")
#endif

//==============================================================================
//==============================================================================
#endif // TEST_DECLTYPE



