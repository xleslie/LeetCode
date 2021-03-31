class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int i=0,j=nums.size();
        int m;
        while(i<j)
        {
            m=i+(j-i)/2;
            if(nums[m]==target) return true;
            if(nums[i]>nums[m])
            {
                //右边非降序
                if(nums[m]<target&&nums[j-1]>=target) i=m+1;
                else j=m;
            }
            else if(nums[i]<nums[m])
            {
                if(nums[m]>target&&nums[i]<=target) j=m;
                else i=m+1;
            }
            else
            {
                while(i<j&&nums[i]==nums[m])
                    ++i;
                while(i<j&&nums[m]==nums[j-1])
                    --j;
            }

        }
        return false;
        
    }
};
