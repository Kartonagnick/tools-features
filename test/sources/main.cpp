// [2021y-05m-18d][22:27:01] Idrisov Denis R.  
// [2021y-05m-18d][22:27:01] birthday of the project  
#include <mygtest/main.hpp>
//==============================================================================
//==============================================================================

GTEST_API_ int main(int argc, char** argv)
{
    // example settings:
    //   test.ext --gtest_filter=tools.stopwatch* --stress
    //   testing::GTEST_FLAG(filter) = "tools.stopwatch_*";
    return ::testing::run(argc, argv);
}

//==============================================================================
//==============================================================================
