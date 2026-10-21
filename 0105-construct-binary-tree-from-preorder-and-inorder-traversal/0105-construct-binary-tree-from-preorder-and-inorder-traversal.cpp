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
    int search(vector<int>& in, int st, int end, int val) {
        for (int i = st; i <= end; i++) {
            if (in[i] == val)
                return i;
        }
        return -1;
    }

    TreeNode* btree(vector<int>& pre,vector<int>& in,int st,int end,int& preidx) {

        if (st > end)
            return NULL;

        TreeNode* node = new TreeNode(pre[preidx++]);

        int rootIndex = search(in, st, end, node->val);

        node->left = btree(pre, in, st, rootIndex - 1, preidx);

        node->right = btree(pre, in,rootIndex + 1,end,preidx);

        return node;
    }

    TreeNode* buildTree(vector<int>& preorder,vector<int>& inorder) {

        int preidx = 0;

        return btree(preorder,inorder,0,inorder.size() - 1,preidx);
    }
};