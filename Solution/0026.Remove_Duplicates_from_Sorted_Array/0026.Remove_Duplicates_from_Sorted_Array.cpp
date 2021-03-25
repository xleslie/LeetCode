class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        int i=0,j=1;
        while(j<nums.size())
        {
            if(nums[j]!=nums[i])
            {
                ++i;
                if(j-i>0)        //优化部分：增加原地复制的判断
                    nums[i]=nums[j];
            }
            ++j;
        }
        return i+1;
    }
};
