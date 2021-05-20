// [2020y-05m-21d][02:00:00] Idrisov Denis R. 002
// [2021y-02m-28d][01:43:52] Idrisov Denis R.
#include <mygtest/modern.hpp>
//=================================================================================
//=================================================================================

#ifdef TEST_STASTIC_CHECK

#define dTEST_COMPONENT tools, features
#define dTEST_METHOD test_STASTIC_CHECK
#define dTEST_TAG tdd

#include <tools/features.hpp>

//==============================================================================
//==============================================================================

TEST_COMPONENT(000)
{
    enum { value = 1 };

    dSTATIC_CHECK(
        STATIC_ASSERT_NOT_WORKED,
        value
    );
}

//==============================================================================
//==============================================================================
#endif // TEST_STASTIC_CHECK



