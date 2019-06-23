/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        int maxdepth=0;
        if(root==NULL)
        {
            return 0;
        }
        else
        {
            maxdepth=max(maxDepth(root->left),maxDepth(root->right));
            return maxdepth+1;
        }
    }
};

作者：gpe3DBjDS1
链接：https://leetcode-cn.com/problems/two-sum/solution/er-cha-shu-de-zui-da-shen-du-by-gpe3dbjds1/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
