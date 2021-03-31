## 题目描述
There is an integer array nums sorted in non-decreasing order (not necessarily with distinct values).

Before being passed to your function, nums is rotated at an unknown pivot index k (0 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,4,4,5,6,6,7] might be rotated at pivot index 5 and become [4,5,6,6,7,0,1,2,4,4].

Given the array nums after the rotation and an integer target, return true if target is in nums, or false if it is not in nums.

## Example
### Example 1:
Input: nums = [2,5,6,0,0,1,2], target = 0
Output: true

## 解题思路
### 1.二分查找 
这道题实际上是33题旋转数组的变形，那么这道题跟33题的区别在哪呢?  
33题中旋转数组不含有重复元素，因此如果nums[m]>nums[i]，则左边有序，否则右边有序；  
但81题中旋转数组含有重复元素，则有可能出现nums[m]==nums[i],此时实际上，是无法判断左边有序，还是右边有序的，例如：1 1 1 1 1 2 1 1  
那么只能缩减左右边界 i-- 或j--，去掉重复元素
