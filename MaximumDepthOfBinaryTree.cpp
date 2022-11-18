//Leet today >> 1118
//いろいろ忙しくてめっちゃ久しぶり。最近図書館も行けてないし研究室も行けてないな。意識低。

//Maximum Depth Of Binary Tree


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

 //いよいよわけわからんLinked Listが終わってTree.

class Solution {
public:
    int maxDepth(TreeNode* root) {
      // TreeNode *right = root;
      // TreeNode *left = root;

      if(root == NULL) return 0;

      int depR = maxDepth(root -> right);
      int depL = maxDepth(root -> left);
      return max(depR, depL)+1;
      

    }

};
