// [2020y-06m-01d][20:00:00] Idrisov Denis R. 003
// [2021y-03m-04d][01:29:32] Idrisov Denis R.
#include <mygtest/modern.hpp>
//=================================================================================
//=================================================================================

#ifdef TEST_TYPE_TRAITS

#define dTEST_COMPONENT tools, features
#define dTEST_METHOD test_HAS_TYPE_TRAITS
#define dTEST_TAG tdd

#include <tools/features.hpp>
#include <string>

#ifdef dHAS_TYPE_TRAITS
    dPRAGMA_MESSAGE("[test] enabled  -> dHAS_TYPE_TRAITS")
    #include <type_traits>
#else
    dPRAGMA_MESSAGE("[test] disabled -> dHAS_TYPE_TRAITS")
#endif

//==============================================================================
//==============================================================================
namespace
{
    #ifdef dHAS_TYPE_TRAITS
        enum { value = std::is_array<char[1]>::value };
        dSTATIC_ASSERT(MUST_BE_ARRAY, value);
    #endif

} // namespace

TEST_COMPONENT(000)
{
    const std::string v = dSSTRINGIZE(dTRAIT);
    dprint(std::cout << "dTRAIT: " << v << '\n');

    #ifdef dHAS_TYPE_TRAITS
        ASSERT_TRUE(v == "std");
    #else
        ASSERT_TRUE(v == "tools");
    #endif
}

//==============================================================================
//==============================================================================
#endif // TEST_TYPE_TRAITS



