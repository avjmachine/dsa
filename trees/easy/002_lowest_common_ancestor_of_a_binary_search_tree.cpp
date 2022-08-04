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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* current = root;
        while (current){
            //both less than current
            if ((p->val < current->val) && (q->val < current->val)){
                current = current->left;
            }
            //both greater than current
            else if ((p->val > current->val) && (q->val > current->val)){
                current = current->right;
            }
            //all other cases, primarily 2 groups
            //    - both on opposite side of current
            //    - one of them same as current
            else{
                return current;
            }
        }
        return current;
    }
};

class Solution2 {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
            //both less than root
            if ((p->val < root->val) && (q->val < root->val)){
                return lowestCommonAncestor(root->left, p, q);
            }
            //both greater than root
            else if ((p->val > root->val) && (q->val > root->val)){
                return lowestCommonAncestor(root->right, p, q);
            }
            //all other cases, primarily 2 groups
            //    - both on opposite side of root
            //    - one of them same as root
            else{
                return root;
            }
    }
};