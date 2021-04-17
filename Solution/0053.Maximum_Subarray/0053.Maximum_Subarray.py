#法一：动态规划
class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        maxSum=nums[0]
        for i in range(1,len(nums)):
            nums[i]=max(nums[i-1]+nums[i],nums[i])
            if nums[i]>maxSum:
                maxSum=nums[i]
        return maxSum
      
 #法二：分治法1
class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        return self.mySubArray(nums,0,len(nums))
    def mySubArray(self,nums,l,r):
        if r-l==1:
            return nums[l]
        m=l+(r-l)//2
        maxSum=max(self.mySubArray(nums,l,m),self.mySubArray(nums,m,r))
        v,L,R=0,nums[m-1],nums[m]
        for i in range(m-1,l-1,-1):
            v=v+nums[i]
            L=max(L,v)
        v=0
        for i in range(m,r):
            v=v+nums[i]
            R=max(R,v)
        return max(maxSum,L+R)
    
 
