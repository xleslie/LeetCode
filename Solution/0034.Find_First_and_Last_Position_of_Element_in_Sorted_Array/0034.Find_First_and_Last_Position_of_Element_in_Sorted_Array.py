class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        i,j=self.lower_bound(nums,target),self.upper_bound(nums,target)
        if i>j:
            return [-1,-1]
        else:
            return [i,j]
    def lower_bound(self,nums,target):
        i,j=0,len(nums)
        while i<j:
            m=i+(j-i)//2
            if nums[m]>=target: j=m
            else: i=m+1
        return i;
    def upper_bound(self,nums,target):
        i,j=0,len(nums)
        while i<j:
            m=i+(j-i)//2
            if nums[m]<=target: i=m+1
            else: j=m
        return j-1
