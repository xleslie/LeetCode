class Solution:
    def search(self, nums: List[int], target: int) -> int:
        i,j=0,len(nums)
        while i<j:
            m=i+(j-i)//2
            if nums[m]==target: return m
            if nums[m]>nums[i]:
                if target<nums[m] and target>=nums[i]:
                    j=m
                else: 
                    i=m+1
            else:
                if target>nums[m] and target <=nums[j-1]:
                    i=m+1
                else:
                    j=m
        return -1
                
