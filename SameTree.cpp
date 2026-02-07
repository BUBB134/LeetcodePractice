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
class Solution
{
public:
    bool isSameTree(TreeNode *p, TreeNode *q)
    {
        // if both nodes are null, they are the same
        if (p == nullptr && q == nullptr)
        {
            return true;
        }
        // if one of the nodes is null, they are not the same
        if (p == nullptr || q == nullptr)
        {
            return false;
        }
        // if the values of the nodes are different, they are not the same
        if (p->val != q->val)
        {
            return false;
        }
        // recursively check the left and right subtrees
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};