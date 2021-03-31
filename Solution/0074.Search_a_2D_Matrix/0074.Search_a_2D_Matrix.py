#法一
class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        n=len(matrix[0])
        i,j=0,len(matrix)*n
        while i<j:
            m=i+(j-i)//2
            r=m//n
            c=m%n
            if matrix[r][c]==target:
                return True
            elif matrix[r][c]>target:
                j=m
            else:
                i=m+1
        return False
      
#法二
class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        m,n=len(matrix),len(matrix[0])
        x,y,l,r=0,m,0,n
        while x<y:
            m1=x+(y-x)//2
            if matrix[m1][0]>target:
                y=m1
            elif matrix[m1][n-1]<target:
                x=m1+1
            elif matrix[m1][0]<=target and matrix[m1][n-1]>=target:
                res=m1
                break
        if x==y:
            return False
        while l<r:
            m2=l+(r-l)//2
            if matrix[res][m2]==target:
                return True
            elif matrix[res][m2]>target:
                r=m2
            else:
                l=m2+1
        return False
        
