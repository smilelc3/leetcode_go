#include <gtest/gtest.h>
#include <vector>
#include "path-sum-ii.cpp"

namespace {
    TEST(pathSumTest, Example1) {
        auto nums = std::vector<int>{5, 4, 8, 11, -1, 13, 4, 7, 2, -1, -1, 5, 1};
        TreeNode *root = GenTreeByNums(nums, -1);
        int targetSum = 22;
        Solution sol;
        auto ans = sol.pathSum(root, targetSum);
        auto rightAns = std::vector<std::vector<int>>{{5, 4, 11, 2},
                                                      {5, 8, 4,  5}};
        ASSERT_EQ(ans, rightAns);
    }


    TEST(pathSumTest, Example2) {
        auto nums = std::vector<int>{1, 2, 3};
        TreeNode *root = GenTreeByNums(nums, -1);
        int targetSum = 5;
        Solution sol;
        auto ans = sol.pathSum(root, targetSum);
        auto rightAns = std::vector<std::vector<int>>{};
        ASSERT_EQ(ans, rightAns);
    }


    TEST(pathSumTest, Example3) {
        auto nums = std::vector<int>{1, 2};
        TreeNode *root = GenTreeByNums(nums, -1);
        int targetSum = 0;
        Solution sol;
        auto ans = sol.pathSum(root, targetSum);
        auto rightAns = std::vector<std::vector<int>>{};
        ASSERT_EQ(ans, rightAns);
    }

}


int main(int argc, char *argv[]) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
