//
// Created by smile on 2021/3/16.
//
#include "TreeNode.h"

#include <vector>

class Solution {
public:
    std::vector<int> ans;

    void flatten(TreeNode *root) {
       flattenMethod1(root);
    }


    // 方法一 先序遍历记录访问节点，再构造答案 time: O(n) space: O(n)
    void flattenMethod1(TreeNode *root) {
        PreorderTraversal(root);
        TransLink2Tree(root);
    }

    // 先序遍历，并保存访问节点数值到ans
    void PreorderTraversal(TreeNode *root) {
        if (root != nullptr) {
            ans.push_back(root->val);
        } else {
            return;
        }
        if (root->left != nullptr) {
            flatten(root->left);
        }
        if (root->right != nullptr) {
            flatten(root->right);
        }
    }

    // 转换vector到二叉树
    void TransLink2Tree(TreeNode *root) {
        for (int idx = 0; idx < ans.size(); idx++) {
            root->val = ans[idx];
            root->left = nullptr;
            root->right = nullptr;
            if (idx < ans.size() - 1) {
                root->right = new TreeNode;
                root = root->right;
            }
        }
    }
};