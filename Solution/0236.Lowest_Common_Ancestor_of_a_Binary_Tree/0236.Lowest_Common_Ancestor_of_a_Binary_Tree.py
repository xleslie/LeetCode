#递归法
class Solution:
    def __init__(self):
        self.ans=None
    def lowestCommonAncestor(self, root: 'TreeNode', p: 'TreeNode', q: 'TreeNode') -> 'TreeNode':
        self.dfs(root,p,q)
        return self.ans
    
    def dfs(self,root,p,q):
        if root is None:
            return False
        flson=self.dfs(root.left,p,q)
        frson=self.dfs(root.right,p,q)
        if (flson and frson) or ((root.val==p.val or root.val==q.val) and (flson or frson)):
            self.ans=root
        return flson or frson or root==p or root==q
      
 #存储父节点
class Solution:
    def __init__(self):
        self.fa=dict()
        self.vis=dict()
    def lowestCommonAncestor(self, root: 'TreeNode', p: 'TreeNode', q: 'TreeNode') -> 'TreeNode':
        self.fa[root.val]=None
        self.dfs(root)
        while p:
            self.vis[p.val]=True
            p=self.fa[p.val]
        while q:
            if q.val in self.vis:
                return q
            else:
                q=self.fa[q.val]
        return None
    def dfs(self,root):
        if root.left:
            self.fa[root.left.val]=root
            self.dfs(root.left)
        if root.right:
            self.fa[root.right.val]=root
            self.dfs(root.right)
