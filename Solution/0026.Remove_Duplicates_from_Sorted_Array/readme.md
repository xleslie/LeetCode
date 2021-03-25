## 题目描述  
Given a sorted array nums, remove the duplicates in-place such that each element appears only once and returns the new length.
Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

Clarification:

Confused why the returned value is an integer but your answer is an array?
Note that the input array is passed in by reference, which means a modification to the input array will be known to the caller as well.
Internally you can think of this:  
```
  // nums is passed in by reference. (i.e., without making a copy)
  int len = removeDuplicates(nums);

  // any modification to nums in your function would be known by the caller.
  // using the length returned by your function, it prints the first len elements.
  for (int i = 0; i < len; i++) {
      print(nums[i]);
  }
```  
## Example
### Example 1:
Input: nums = [1,1,2]  
Output: 2, nums = [1,2]  
Explanation: Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively. It doesn't matter what you leave beyond the returned length.  
## 解题思路  
### 题目大意
去除有序数组中的重复元素，并返回去重后的数组长度

### 1、双指针法
使用两个指针i和j，i用于指示去重后的数组下标，从0开始，j用于遍历去重前的整个数组，从1开始，如果j所指数组值与i所指数组值相同，则为重复元素，跳过，若不同，则将j所指数组值复制到i+1的位置，i++。

### 2、双指针法优化
考虑极端情况，数组中不存在重复值，那么每次都需要对数组进行原地复制，为了优化这一原地复制时间，在每次复制之前，判断是否需要复制，若不需要，则只增加i的值。示例代码采用这种优化写法，经实验时间效率会更高。
