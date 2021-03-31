class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int i=lower_bound(nums,target);
        int j=upper_bound(nums,target);
        if(i>j) return {-1,-1};
        else return {i,j};
    }
    int lower_bound(vector<int>& nums,int target)
    {
        int i=0,j=nums.size();
        int m;
        while(i<j)
        {
            m=i+(j-i)/2;
            if(nums[m]>=target) j=m;
            else if(nums[m]<target) i=m+1;
        }
        return i;
    }
    int upper_bound(vector<int>& nums,int target)
    {
        int i=0,j=nums.size();
        int m;
        while(i<j)
        {
            m=i+(j-i)/2;
            if(nums[m]<=target) i=m+1;
            else if(nums[m]>target) j=m;
        }
        return j-1;
    }
};
