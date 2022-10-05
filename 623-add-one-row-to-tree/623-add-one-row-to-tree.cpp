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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
      if(depth==1)
      {
          TreeNode* nd=new TreeNode(val);
          nd->left=root;
          return nd;
      }
        queue<TreeNode*> qu;
        qu.push(root);
        int lv=1;
        while(!qu.empty() && lv<depth-1)
        {
            int sz=qu.size();
            for(int i=0;i<sz;i++)
            {
                TreeNode* tmp=qu.front();
                qu.pop();
                if((tmp->left))
                    qu.push(tmp->left);
                if(tmp->right)
                    qu.push(tmp->right);
            }
            lv++;
            
        }
        int sz=qu.size();
        
        for(int i=0;i<sz;i++)
        {
            TreeNode* t1=new TreeNode(val),*t2=new TreeNode(val);
            TreeNode* tmp=qu.front();
            qu.pop();
            TreeNode* lf=tmp->left;
            TreeNode* rg=tmp->right;
            tmp->left=t1;
            tmp->right=t2;
             t1->left=lf;
            t2->right=rg;
        }
        return root;
    }
};