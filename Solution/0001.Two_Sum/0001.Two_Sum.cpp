class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m;
        for(int i=0;i<nums.size();++i)
        {
            int anchor=target-nums[i];    //trick 把要找的目标值记录下来，以免重复计算
            if(m.count(anchor)==0)
                m[nums[i]]=i;
            else
                return {m[anchor],i};   
        }
        return {};

    }
};
