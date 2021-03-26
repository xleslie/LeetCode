## 题目描述
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

## Example
### Example 1:
Input: nums = [1,3,5,6], target = 5
Output: 2

## 解题思路
### 1.暴力解法 
遍历数组中的每一个数，直到找到大于或等于目标值的数。
<br/>时间复杂度O（n），空间复杂度O（1）
### 2.二分查找
该题为经典二分查找的变种，返回大于或等于某值的位置，与经典二分的区别在于，如果查找失败，即查找区间为[x，x)时，此时不存在目标值，但不返回-1，而是返回插入位置x
