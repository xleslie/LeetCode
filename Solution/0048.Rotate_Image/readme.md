
## 题目描述
You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.

## Example
### Example 1:
Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [[7,4,1],[8,5,2],[9,6,3]]

## 解题思路
### 1.原地旋转
对于一个原位置在（i，j）的元素，顺时针旋转90°后，会位于（j，n-1-i）的位置。  
即matrix[j,n-1-i]=matrix[i,j],这会覆盖掉原来（j，n-1-i）的元素，那么我们继续旋转,原来位于该位置的元素应该被旋转到  
matrix[n-1-i,n-1-j]=matrix[j,n-1-i],继续旋转可得  
matrix[n-1-j,i]=matrix[n-1-i,n-1-j]  
matrix[i,j]=matrix[n-1-j,i]  
这样只需使用一个中间变量temp，将matrix[i,j]保留下来，然后依次更改即可。
每次修改会更改4个元素，一共有n^2个元素，当n为奇数时，中间的元素不变，即修改（n-1）*（n+1）/2*2次。
<br/>时间复杂度O（n^2），空间复杂度O（1）
### 2.两次翻转
首先将矩阵水平翻转，则matrix[i,j]=matrix[n-1-i,j],然后将矩阵沿主对角线翻转，则matrix[n-1-i,j]=matrix[j,n-1-i],这样两次翻转后，可以得到跟1一样的结果
<br/>时间复杂度O（n^2），空间复杂度O（1）
