class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        if len(nums)==0:
            return 0
        i,j=0,0
        while(j<len(nums)):
            if nums[j]!=val:
                if i!=j:
                    nums[i]=nums[j]
                i=i+1
            j=j+1
        return i;
