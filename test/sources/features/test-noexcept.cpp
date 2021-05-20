// [2021y-02m-22d][04:21:08] Idrisov Denis R.
#include <mygtest/modern.hpp>
//=================================================================================
//=================================================================================

#ifdef TEST_NOEXCEPT

#define dTEST_COMPONENT tools, features
#define dTEST_METHOD test_NOEXCEPT
#define dTEST_TAG tdd

#include <tools/features.hpp>

#ifdef dHAS_NOEXCEPT
    dPRAGMA_MESSAGE("[test] enabled  -> dHAS_NOEXCEPT")
#else
    dPRAGMA_MESSAGE("[test] disabled -> dHAS_NOEXCEPT")
#endif

//==============================================================================
//==============================================================================
namespace 
{
    void bar() dNOEXCEPT {}

    #ifdef dHAS_NOEXCEPT
    void foo() noexcept {}
    #endif

} // namespace
//==============================================================================
//==============================================================================

TEST_COMPONENT(000)
{
    bar();

    #ifdef dHAS_NOEXCEPT
    foo();
    #endif
}

//==============================================================================
//==============================================================================
#endif // TEST_NOEXCEPT

