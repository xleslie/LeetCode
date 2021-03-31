## 题目描述
Given an array of integers nums sorted in ascending order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

Follow up: Could you write an algorithm with O(log n) runtime complexity?

## Example
### Example 1:
Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]

## 解题思路
### 1.二分查找
这道题实际就是经典的二分查找的变形，这里采用了结合两种变形lower_bound和upper_bound的方法来实现  
lower_bound(): 找第一个大于或等于目标值的位置  
修改二分查找代码，  
当nums[m]=target的值时，这时左边还可能有目标值，因此查找区间变为[i,m）；  
                当nums[m]>target的值时，这时目标值可能在左边，查找区间变为[i,m);  
                当nums[m]<target的值时，这时目标值不可能在左边，查找区间变为[m+1,j)  
upper_bound(): 找第一个大于目标值的位置  
修改二分查找代码，  
当nums[m]=target的值时，这时搜索右边区间，因此查找区间变为[m+1,j）；    
当nums[m]>target的值时，这时左边可能还有更小的，搜索左边区间，查找区间变为[i,m);  
当nums[m]<target的值时，这时不可能搜索左边，搜索右边区间，查找区间变为[m+1,j)  
最终lower_bound（）返回左边边界L,upper_bound()返回右边边界R,因此出现区间为[L,R),若L、R不满足L<R，则为无效区间，不存在目标值
