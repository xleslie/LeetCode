## 题目描述
Given the head of a singly linked list, reverse the list, and return the reversed list.

## Example
### Example 1:
Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]

## 解题思路
### 1.迭代法
从第一个节点开始，将该节点的下一个节点修改为其上一个节点，每次使用一个节点来存储其上一个节点，直到该节点为空
<br/>时间复杂度O（n），空间复杂度O（1）
### 2.递归法
假设第二个节点开始已经全部反转，那么第二个节点的下一个节点为头节点，头节点的下一个节点为空。终止条件为空节点或单节点
<br/>时间复杂度O（n），空间复杂度O（n），递归调用时的栈空间，最多为n层
