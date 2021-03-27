## 题目描述
Given an array of integers numbers that is already sorted in ascending order, find two numbers such that they add up to a specific target number.

Return the indices of the two numbers (1-indexed) as an integer array answer of size 2, where 1 <= answer[0] < answer[1] <= numbers.length.

You may assume that each input would have exactly one solution and you may not use the same element twice.

## Example
### Example 1:
Input: numbers = [2,7,11,15], target = 9
Output: [1,2]
Explanation: The sum of 2 and 7 is 9. Therefore index1 = 1, index2 = 2.

## 解题思路
### 1.一遍hash法
第一题两数和的变种，也可以采用一遍hash的方法，一遍存数一遍检查是否存在，但这样就没有利用到有序数组的信息
<br/>时间复杂度O（n），空间复杂度O（n） 
### 2.双指针法
map： nums[i] --> i
采用两个指针，从前后分别遍历数组
<br/>时间复杂度O（n），空间复杂度O（1）   
这里只记录第二种解法
