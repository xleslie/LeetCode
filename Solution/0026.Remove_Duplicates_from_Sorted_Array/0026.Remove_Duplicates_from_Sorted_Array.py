class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        if len(nums)==0:
            return 0
        i,j=0,1
        while j<len(nums):
            if nums[j]!=nums[i]:
                i=i+1
                if i!=j:
                    nums[i]=nums[j]
            j=j+1
        return i+1
                
