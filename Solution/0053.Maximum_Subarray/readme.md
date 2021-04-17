## 题目描述
Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

## Example
### Example 1:
Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.

## 解题思路
### 1.动态规划法 
nums[i]表示第i个位置上的数，sum[i]表示[0,i]的最大连续和，则sum[i]=max(sum[i-1]+nums[i],nums[i]),通过改写，就能很轻易得找到递推公式，修改原先的nums数组用来存储sum数组，sum[0]=nums[0]，从1开始遍历整个数组，sum[i]=max(sum[i-1]+nums[i],nums[i])，然后记录下最大值，即为最大连续和
<br/>时间复杂度O（n），空间复杂度O（1）
### 2.分治法1
首先来说一种比较容易理解的分治法思路，分治法分为三步，划分、单独求解、合并解  
划分：就是将数组一分为二，分别对左右的子数组进行求解，当数组中只剩一个元素时，此时无需再划分，该区间最大连续和即为该值；
单独求解：分别递归求解左边和右边子数组的最大连续和  
合并：最终的结果有三种情况，最大连续和完全位于左边，最大连续和完全位于右边，或者最大连续和一半在左边，一半在右边。最大连续和完全位于左边或右边的情况我们已经递归求解出了，只需要比较哪个大即可；关键在于求解一半在左边，一半在右边的情况。可以以分界点为中心，分别求解从分界点往左的最大连续和L、从分界点往右的最大连续和R，然后比较L+R与子问题的解 
<br/>时间复杂度O（nlogn），空间复杂度O（logn）
### 3.分治法2
在分治法2中，合并时需要求解一半在左边一半在右边的最大连续和，需要遍历从左到右的整个子数组，可以使用空间换时间，将子数组求解过程中的解记录下来，对于区间[L,R),维护四个变量    
1.lSum 表示 [L,R) 内以 L 为左端点的最大子段和  
2.2.rSum 表示 [L,R) 内以 R 为右端点的最大子段和  
3.3.mSum 表示 [L,R) 内的最大子段和  
4.4.iSum 表示 [L,R)的区间和  
则在最后合并解时：  
lSum=max(L.lSum,L.iSum+R.lSum)  
rSum=max(R.rSum,R.iSum+L.rSum)
mSum=max(max(L.mSum,R.mSum),L.rSum+R.lSum)
<br/>时间复杂度O（n），空间复杂度O（logn）  
