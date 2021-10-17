//法一:递归法
class Solution {
public:
    TreeNode *ans;
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        dfs(root,p,q);
        return ans;
    }
    bool dfs(TreeNode* root,TreeNode* p,TreeNode* q)
    {
        if(!root)
            return false;
        bool flson=dfs(root->left,p,q);
        bool frson=dfs(root->right,p,q);
        if((flson&&frson)||((root==p||root==q)&&(flson||frson)))
            ans=root;
        return root==p||root==q||flson||frson;
    }
};

//存储父节点
class Solution {
public:
    unordered_map<int,TreeNode*> fa;
    unordered_map<int,bool> vis;
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        fa[root->val]=NULL;
        dfs(root);
        while(p)
        {
            vis[p->val]=true;
            p=fa[p->val];
        }
        while(!vis[q->val])
        {
            q=fa[q->val];
        }
        return q;
    }
    void dfs(TreeNode* root)
    {
        if(root->left)
        {
            fa[root->left->val]=root;
            dfs(root->left);
        }
        if(root->right)
        {
            fa[root->right->val]=root;
            dfs(root->right);
        }
    }
};
