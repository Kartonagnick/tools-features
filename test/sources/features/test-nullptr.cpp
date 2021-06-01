// [2020y-06m-01d][11:15:00] Idrisov Denis R. 003 PRE
// [2021y-02m-22d][04:21:08] Idrisov Denis R.
#include <mygtest/modern.hpp>
//=================================================================================
//=================================================================================

#ifdef TEST_NULLPTR

#define dTEST_COMPONENT tools, features
#define dTEST_METHOD test_HAS_NULLPTR
#define dTEST_TAG tdd

#include <tools/features.hpp>

#ifndef dHAS_NULLPTR
    dPRAGMA_MESSAGE("[test] disabled -> dHAS_NULLPTR")
#else
    dPRAGMA_MESSAGE("[test] enabled  -> dHAS_NULLPTR")

#include <tools/features.hpp>

//==============================================================================
//==============================================================================
namespace 
{
    void foo(char* p)
    {
        ASSERT_TRUE(!p);
    }

    void bar(std::nullptr_t p)
    {
        void* a = p;
        ASSERT_TRUE(p == 0);
        ASSERT_TRUE(!a);
    }

} // namespace
//==============================================================================
//==============================================================================

TEST_COMPONENT(000)
{
    char* p = nullptr;
    foo(p);
}

TEST_COMPONENT(001)
{
    bar(nullptr);
}

//==============================================================================
//==============================================================================
#endif // dHAS_NULLPTR
#endif // TEST_NULLPTR

