## 题目描述
There is an integer array nums sorted in ascending order (with distinct values).

Prior to being passed to your function, nums is rotated at an unknown pivot index k (0 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].

Given the array nums after the rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

## Example
### Example 1:
Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4

## 解题思路
### 1.二分查找法
旋转数组是一种比较典型的二分法变种，其实二分法的关键不在于数组必须完全有序，而是要借助有序来确定是找左边还是找右边， 因此，只要能确定左右边界，就可以用二分法来处理。  
这道题与基本的二分相比，关键在于在确定左右时要进行额外的判断，以中值为界，两边的数组必然一边有序，一边无序  
假如左边有序，即nums[m]>nums[i]：那么当target位于中值和最左值之间时，找左边，否则找右边；
假如右边有序，即nums[m]<nums[i]：那么当target位于中值和最右值之间时，找右边，否则找左边；
<br/>时间复杂度O（logn），空间复杂度O（1）
