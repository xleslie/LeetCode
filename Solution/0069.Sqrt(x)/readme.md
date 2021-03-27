## 题目描述
Given a non-negative integer x, compute and return the square root of x.
Since the return type is an integer, the decimal digits are truncated, and only the integer part of the result is returned.

## Example
### Example 1:
Input: x = 4
Output: 2

## 解题思路
### 1.二分查找 
这道题实际上算是二分查找的实际应用，对于x=0或1，平方根就是本身直接返回即可，而对于其他数字，实际上就是在[1,x/2]的区间内，查找整数i，使得i*i>=x,且（i+1）*（i+1）<x，那么其实就转变成了二分查找问题，  
注意，由于本题的数字范围较大，可能出现溢出的情况，因此可以将m*m>x改写为m>x/m，避免溢出情况。判断情况：如果x/m<m，那么搜索空间必然在左边[l,m)，减少搜索空间，否则的话，则要判断一下，如果x/（m+1）<(m+1)  
则m就是要搜索的值，否则的话，搜索空间在右边[m,r);
<br/>时间复杂度O（logn），空间复杂度O（1）
### 2.牛顿迭代法
牛顿迭代法实际上是利用公式，计算f（x）=x*x-C的零点，从x=C开始迭代，每次寻找（xi，xi*xi-C）所在切线的零点，逐步逼近
<br/>时间复杂度O（logn），空间复杂度O（1），但收敛会比二分更快
