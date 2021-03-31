class Solution:
    def search(self, nums: List[int], target: int) -> bool:
        i,j=0,len(nums)
        while i<j:
            m=i+(j-i)//2
            if nums[m]==target: return True
            if nums[m]>nums[i]:
                if target>=nums[i] and target<nums[m]:
                    j=m
                else:
                    i=m+1
            elif nums[m]<nums[i]:
                if target>nums[m] and target <=nums[j-1]:
                    i=m+1
                else:
                    j=m
            elif nums[m]==nums[i]:
                while i<j and nums[i] == nums[m]:
                    i+=1
                while i<j and nums[j-1] ==nums[m]:
                    j-=1
        return False
