#include <gtest/gtest.h>
#include <vector>
#include "minimum-depth-of-binary-tree.cpp"

namespace {
    TEST(minDepthTest, Example1) {
        auto nums = std::vector<int>{3, 9, 20, -1, -1, 15, 7};
        TreeNode *root = GenTreeByNums(nums, -1);
        auto sol = Solution();
        int ans = sol.minDepth(root);
        int rightAns = 2;
        ASSERT_EQ(ans, rightAns);
    }

    TEST(minDepthTest, Example2) {
        auto nums = std::vector<int>{2, -1, 3, -1, 4, -1, 5, -1, 6};
        TreeNode *root = GenTreeByNums(nums, -1);
        auto sol = Solution();
        int ans = sol.minDepth(root);
        int rightAns = 5;
        ASSERT_EQ(ans, rightAns);
    }
}


int main(int argc, char *argv[]) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
