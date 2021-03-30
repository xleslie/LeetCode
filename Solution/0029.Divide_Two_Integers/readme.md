## 题目描述
Given two integers dividend and divisor, divide two integers without using multiplication, division, and mod operator.
Return the quotient after dividing dividend by divisor.
The integer division should truncate toward zero, which means losing its fractional part. For example, truncate(8.345) = 8 and truncate(-2.7335) = -2.
Note: Assume we are dealing with an environment that could only store integers within the 32-bit signed integer range: [−231, 231 − 1]. For this problem, assume that your function returns 231 − 1 when the division result overflows.
## Example
### Example 1:
Input: dividend = 10, divisor = 3
Output: 3
Explanation: 10/3 = truncate(3.33333..) = 3.

## 解题思路
这道题要求不能使用乘法、除法，否则的话，可以采用二分的思路，将被除数和除数都变换到负数范围内，避免溢出的情况，然后商的范围在[0,x],二分查找，找到商*除数<=被除数，（商+1）*除数>被除数，即可；
但这里要求不能使用乘除法，考虑用加减来模拟乘除，例如:10/3  首先10>3那么商至少为1，然后让3翻倍，3+3=6，此时10>6，那么商至少为2(1+1),接着再让6翻倍，那么6+6=12，10<12,那么商应该在2与4  
（2+2）之间；那么实际的商就应该是之前确定的2+ 剩下的数（10-6）与3的商。  
注意：这道题主要在于对边界范围的处理，首先用一个sign来标志商的正负，从而统一处理，接下来，将除数和被除数都变换到对应的负数，这是因为负数的范围大于正数，避免INT_MIN变换为正数后溢出。  
然后考虑边界情况，当被除数为INT_MIN时，这是如果divisor=1，那么返回INT_MIN即可，如果divisor=-1，那么此时会溢出，按要求返回INT_MAX即可。（其实这里只用考虑溢出的情况，即divisor=-1即可，但  
leetcode运行时，当divisor=1会报错，用dev运行可以成功运行）。
