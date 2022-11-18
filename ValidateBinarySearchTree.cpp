//Leet today >> 1115 (2nd question)
//Validate Binary Search Tree
//二分探索木の検証

//Determine if Tree is a valid binary search tree. (BST)

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
  bool validate(TreeNode* root, TreeNode* low, TreeNode* high){
    if(root == NULL) return true;

    if((low != NULL and root -> val <= low -> val) or (high != NULL and root -> val >= high -> val)){
      return false;
    }

    return validate(root -> right, root, high)
           and
           validate(root -> left, low, root);
  }

  bool isValidBST(TreeNode* root) {
    return validate(root, NULL, NULL);
    }
};
