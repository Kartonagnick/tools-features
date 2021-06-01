// [2020y-06m-01d][11:15:00] Idrisov Denis R. 003 PRE
// [2021y-03m-10d][13:28:40] Idrisov Denis R.
#include <mygtest/modern.hpp>
//=================================================================================
//=================================================================================

#ifdef TEST_LAMBDA

#define dTEST_COMPONENT tools, features
#define dTEST_METHOD test_HAS_LAMBDA
#define dTEST_TAG tdd

#include <tools/features.hpp>

#ifdef dHAS_CSTDINT
    dPRAGMA_MESSAGE("[test] enabled  -> dHAS_LAMBDA")

    namespace
    {
        const auto lambda = []() { return true; };

    } // namespace

    TEST_COMPONENT(000)
    {
        ASSERT_TRUE(lambda());
    }

#else
    dPRAGMA_MESSAGE("[test] disabled -> dHAS_LAMBDA")
#endif


//==============================================================================
//==============================================================================
#endif // TEST_LAMBDA



