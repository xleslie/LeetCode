## 题目描述  
Given an array nums and a value val, remove all instances of that value in-place and return the new length.  
Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.  
The order of elements can be changed. It doesn't matter what you leave beyond the new length.  

Clarification:
Confused why the returned value is an integer but your answer is an array?
Note that the input array is passed in by reference, which means a modification to the input array will be known to the caller as well.
Internally you can think of this:
```
// nums is passed in by reference. (i.e., without making a copy)
int len = removeElement(nums, val);

// any modification to nums in your function would be known by the caller.
// using the length returned by your function, it prints the first len elements.
for (int i = 0; i < len; i++) {
    print(nums[i]);
}
```  
## Example
### Example 1:
Input: nums = [3,2,2,3], val = 3  
Output: 2, nums = [2,2]  
Explanation: Your function should return length = 2, with the first two elements of nums being 2.  
It doesn't matter what you leave beyond the returned length. For example if you return 2 with nums = [2,2,3,3] or nums = [2,2,0,0], your answer will be accepted.
## 解题思路  
### 题目大意
去除数组中的所有指定元素，并返回去除后的数组长度。  
这道题其实思路类似26题，是26题的变种。同样采用双指针法，一个指针i用于指示去除后数组下标，一个指针j用于遍历去除前原数组，由于本题为去除指定元素，因此两个指针都要从0开始遍历，若j所指不是要去除的元素，则将j所指值复制到i所指值处，更新i；否则，跳过该值。同样，为了避免原地复制，在复制前可以先判断是否需要复制（i==j？）
