//
// Created by smile on 2021/6/9.
//

#include <gtest/gtest.h>
#include "intersection-of-two-linked-lists.cpp"

namespace {
    TEST(getIntersectionNodeTest, Example1) {      // NOLINT
        auto listA = GenLinksByNums({4, 1, 8, 4, 5});
        auto listB = GenLinksByNums({5, 6, 1});
        listB->next->next->next = listA->next->next;
        auto ans = Solution().getIntersectionNode(listA, listB);
        ASSERT_EQ(ans, listA->next->next);
    }

    TEST(getIntersectionNodeTest, Example2) {       // NOLINT
        auto listA = GenLinksByNums({1, 9, 1, 2, 4});
        auto listB = GenLinksByNums({3});
        listB->next = listA->next->next->next;
        auto ans = Solution().getIntersectionNode(listA, listB);
        ASSERT_EQ(ans, listB->next);
    }

    TEST(getIntersectionNodeTest, Example3) {         // NOLINT
        auto listA = GenLinksByNums({2, 6, 4});
        auto listB = GenLinksByNums({1, 5});
        auto ans = Solution().getIntersectionNode(listA, listB);
        ASSERT_EQ(ans, nullptr);
    }

    TEST(getIntersectionNodeTest, Test0) {         // NOLINT
        auto listA = GenLinksByNums({1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21});
        auto listB = GenLinksByNums({2});
        auto ans = Solution().getIntersectionNode(listA, listB);
        ASSERT_EQ(ans, nullptr);
    }

    TEST(getIntersectionNodeTest, Test1) {         // NOLINT
        auto listA = GenLinksByNums({1});
        auto listB = GenLinksByNums({2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22});
        auto ans = Solution().getIntersectionNode(listA, listB);
        ASSERT_EQ(ans, nullptr);
    }
}

int main(int argc, char *argv[]) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
