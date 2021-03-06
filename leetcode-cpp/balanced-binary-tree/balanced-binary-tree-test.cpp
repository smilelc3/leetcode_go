#include <gtest/gtest.h>
#include <vector>
#include "balanced-binary-tree.cpp"

namespace {
    TEST(isBalancedTest, Example1) {
        auto root = GenTreeByNums({3, 9, 20, -1, -1, 15, 7}, -1);
        int result = Solution::isBalanced(root);
        ASSERT_TRUE(result);
    }


    TEST(isBalanced, Example2) {
        auto root = GenTreeByNums({1, 2, 2, 3, 3, -1, -1, 4, 4}, -1);
        int result = Solution::isBalanced(root);
        ASSERT_FALSE(result);
    }

    TEST(isBalancedTest, nullTree) {
        TreeNode *root = nullptr;
        int result = Solution::isBalanced(root);
        ASSERT_TRUE(result);
    }
}


int main(int argc, char *argv[]) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
