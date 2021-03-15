class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        d = dict()
        for i in range(len(nums)):
            anchor = target-nums[i]
            if d.has_key(anchor) == False:
                d[nums[i]]=i
            else:
                return [d[anchor],i]
        return []
