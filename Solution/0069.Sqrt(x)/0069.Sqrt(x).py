#法一：
class Solution:
    def mySqrt(self, x: int) -> int:
        if x==0 or x==1:
            return x
        i,j=0,x//2+1
        while i<j:
            m=i+(j-i)//2
            if x//m<m:
                j=m
            elif x//m>=m and x//(m+1)<m+1:
                return m
            else:
                i=m+1
        return -1

#法二：牛顿迭代法
class Solution:
    def mySqrt(self, x: int) -> int:
        if x==0 or x==1:
            return x
        r = x
        while r>x/r:
            r=(r+x//r)//2
        return r
