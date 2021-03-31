## 题目描述
Write an efficient algorithm that searches for a value in an m x n matrix. This matrix has the following properties:

Integers in each row are sorted from left to right.
The first integer of each row is greater than the last integer of the previous row.

## Example
### Example 1:
Input:  
matrix = [  
  [1,   3,  5,  7],  
  [10, 11, 16, 20],  
  [23, 30, 34, 50]  
 ]  
target = 3  
Output: true

## 解题思路
### 1.整体二分法
这个二维数组实际上可以看作是一个有序的m*n的一维数组，因此只需要进行行列坐标转换，用基本的二分思路就行
<br/>时间复杂度O（logn），空间复杂度O（1）
### 2.先对行二分，再对列二分
可以先应用二分的思路，找到目标值所在行即matrix[m][0]>=target&&matrix[m][n-1]<=target的所在行m，然后再对该行应用基本一维数组二分查找就好。
