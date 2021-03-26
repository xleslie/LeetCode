class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i=0,j=nums.size();
        int m;
        while(i<j)
        {
            m=i+(j-i)/2;
            if(nums[m]>=target) j=m;
            else{
                if(m==nums.size()-1||nums[m+1]>=target)
                    return m+1;
                else 
                    i=m+1;
            }
        }
        return i;
    }
};
