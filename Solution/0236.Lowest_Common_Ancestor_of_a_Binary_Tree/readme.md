## 题目描述
Given a binary tree, find the lowest common ancestor (LCA) of two given nodes in the tree.

According to the definition of LCA on Wikipedia: “The lowest common ancestor is defined between two nodes p and q as the lowest node in T that has both p and q as descendants (where we allow a node to be a descendant of itself).”

## Example
### Example 1:
Input: root = [3,5,1,6,2,0,8,null,null,7,4], p = 5, q = 1
Output: 3
Explanation: The LCA of nodes 5 and 1 is 3.

## 解题思路
### 1.递归法 
令函数F表示F的子树中是否存在节点p或者q，若存在则返回true，否则返回false，那么最近公共祖先则为节点X （Flson&&Frson）||((X==p||X==q)&&(Flson||Frson)),递归处理
<br/>时间复杂度O（n），空间复杂度O(n）,递归调用的栈空间。
### 2.存储父节点
使用unordered_map将每个节点的父节点存储起来，然后从p出发，沿着父节点访问到跟根节点，标记已访问的节点，然后从q出发，第一个已访问的节点即为最近公共祖先。
<br/>时间复杂度O（n），空间复杂度O（n）

