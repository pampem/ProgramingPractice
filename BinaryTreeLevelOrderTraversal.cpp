//Leet today >> 1124
//Binary Tree Level Order Traversal

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
    vector<vector<int>> ret;

    void buildvector(TreeNode* root, int depth){
      if(root == NULL) return;

      if(ret.size() == depth) ret.push_back(vector<int>());

      ret[depth].push_back(root -> val);

      buildvector(root -> right, depth+1);
      buildvector(root -> left, depth+1);
    }

    vector<vector<int>> levelOrder(TreeNode* root) {
        buildvector(root, 0);
        return ret;

    }
};
