// [2020y-06m-01d][11:15:00] Idrisov Denis R. 003 PRE
// [2020y-05m-21d][02:00:00] Idrisov Denis R. 002
// [2021y-02m-25d][04:21:08] Idrisov Denis R.
#include <mygtest/modern.hpp>
//=================================================================================
//=================================================================================

#ifdef TEST_NOCOPYABLE

#define dTEST_COMPONENT tools, features
#define dTEST_METHOD test_NOCOPYABLE
#define dTEST_TAG tdd

#include <tools/features.hpp>

#ifdef dCAN_DELETE_FUNCTION
    dPRAGMA_MESSAGE("[test] enabled  -> dCAN_DELETE_FUNCTION")
#else
    dPRAGMA_MESSAGE("[test] disabled -> dCAN_DELETE_FUNCTION")
#endif

//==============================================================================
//==============================================================================
namespace 
{
    struct alone
    {
        dNOCOPYABLE(alone);
        alone(){}
    };

    #ifdef dCAN_DELETE_FUNCTION
    struct Class
    {
        Class(){}
        Class(const Class&)            = delete;
        Class(Class&&)                 = delete;
        Class& operator=(const Class&) = delete;
        Class& operator=(Class&&)      = delete;
    };
    #endif

} // namespace

//==============================================================================
//==============================================================================

TEST_COMPONENT(000){}

#endif // TEST_NOCOPYABLE

