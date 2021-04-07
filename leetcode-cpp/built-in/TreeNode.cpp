//
// Created by smile on 2021/3/16.
//
# include "TreeNode.h"
# include <vector>
#include <iostream>

TreeNode *GenTreeByNums(std::vector<int> &nums, int nullNum) {
    if (nums.empty() || nums[0] == nullNum) {
        return nullptr;
    }
    auto root = new TreeNode{nums[0]};
    nums.erase(nums.begin());
    auto preLevelNode = std::vector<TreeNode *>{root}; // 维护上一层所有非空父节点
    while (!nums.empty()) {
        int numPreLevelNodes = preLevelNode.size();
        int numsIdx = 0;
        for (int idx = 0; idx < numPreLevelNodes; idx++) {
            if (numsIdx < nums.size()) {
                if (nums[numsIdx] != nullNum) {
                    preLevelNode[idx]->left = new TreeNode{nums[numsIdx]};
                    preLevelNode.push_back(preLevelNode[idx]->left);
                }
                numsIdx++;
            }
            if (numsIdx < nums.size()) {
                if (nums[numsIdx] != nullNum) {
                    preLevelNode[idx]->right = new TreeNode{nums[numsIdx]};
                    preLevelNode.push_back(preLevelNode[idx]->right);
                }
                numsIdx++;
            }

        }
        preLevelNode.erase(preLevelNode.begin(), preLevelNode.begin() + numPreLevelNodes);
        nums.erase(nums.begin(), nums.begin() + numsIdx);
    }
    return root;
}


bool isSameTree(TreeNode *root1, TreeNode *root2) {
    if (root1 == nullptr) {
        return root2 == nullptr;
    }
    if (root1->val != root2->val) {
        return false;
    }
    if (root1->left != nullptr) {
        return  root2->left != nullptr and isSameTree(root1->left, root2->left);
    }
    if (root1->right != nullptr) {
        return  root2->right != nullptr and isSameTree(root1->right, root2->right);
    }
    return true;
}