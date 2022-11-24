//Leet today >> 1124 #2
//Convert sorted array to binary search tree

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
  TreeNode* sortedArrayToBST(vector<int>& nums, int start, int end) {
      if(end <= start) return NULL;
      int midIdx = (start + end)/2;
      TreeNode* root = new TreeNode(nums[midIdx]);　//mid node is the root. since nums is sorted!!!
      root->left=sortedArrayToBST(nums, start, midIdx);
      root->right=sortedArrayToBST(nums, midIdx+1,end);
      return root;
  }

public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
      return sortedArrayToBST(nums,0,nums.size());
    }
};
