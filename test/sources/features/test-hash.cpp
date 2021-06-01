// [2020y-06m-01d][20:00:00] Idrisov Denis R. 003
// [2021y-03m-03d][19:14:11] Idrisov Denis R.
#include <mygtest/modern.hpp>
//=================================================================================
//=================================================================================

#ifdef TEST_HASH

#define dTEST_COMPONENT tools, features
#define dTEST_METHOD test_HAS_HASH
#define dTEST_TAG tdd

#include <tools/features.hpp>

#ifdef dHAS_HASH
    dPRAGMA_MESSAGE("[test] enabled  -> dHAS_HASH")
    #include <functional>
#else
    dPRAGMA_MESSAGE("[test] disabled -> dHAS_HASH")
#endif

//==============================================================================
//==============================================================================

#ifdef dHAS_HASH
TEST_COMPONENT(000)
{
    const ::std::hash<int> h;
    dprint(std::cout << "hash = " << h(100) << '\n');
    (void)h;
}
#endif

//==============================================================================
//==============================================================================
#endif // TEST_HASH



