//
// Created by smile on 2021/3/16.
//

#ifndef LEETCODE_LISTNODE_H
#define LEETCODE_LISTNODE_H


# include <vector>

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;

    explicit ListNode(int val) : val(val), next(nullptr) {}
};

// 通过vector<int>构建List
ListNode *GenLinksByNums(const std::vector<int> &nums);

// TEST 判断两棵树是否相等
bool isSameList(ListNode const *head1, ListNode const *head2);

// 判断是否链表存在环
bool isLinkHasCycle(ListNode const *head);

#endif //LEETCODE_LISTNODE_H
