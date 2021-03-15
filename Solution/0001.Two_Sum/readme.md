## 题目描述
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

## Example
### Example 1:
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Output: Because nums[0] + nums[1] == 9, we return [0, 1].

## 解题思路
### 1.暴力解法 
遍历数组中的每一个数x,对于每个x，遍历其后的数组，寻找是否存在target-x，若找到则返回x和target-x的下标，否则继续遍历下一个数。
<br/>时间复杂度O（n2），空间复杂度O（1）
### 2.二遍扫描
map： nums[i] --> i
利用Hash表将数组中的数x与其下标对应起来，将查找数x所在下标的时间复杂度降为O（1），具体思路为：首先顺序扫描数组，将数组中的数x与下标存储到hash表中（第一遍扫描），
然后再顺序扫描数组，对于每个数x，查询target-x是否存储在hash表中，若有则返回x下标和target-x下标（第二遍扫描）。
<br/>时间复杂度O（n），空间复杂度O（n） （以空间换时间，增加一个hash表的存储空间，降低查找的时间复杂度）
### 3.一遍扫描（best）
建Hash表和查找目标的过程其实可以集中在一次顺序扫描中完成，一次顺序扫描中，对于当前扫描值x，若hash表中不存在对应目标target-x，则先存入hash表中待后续查找，否则返回target-x的下标和x的下标
<br/>时间复杂度O（n），空间复杂度O（n）  
<br/>这里只记录第三种实现方法。
