class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i=0,j=nums.size();
        int m;
        while(i<j)
        {
            m=i+(j-i)/2;
            if(nums[m]==target) return m;
            if(nums[m]>nums[i])
            {
                //左边有序
                if(nums[m]>target&&nums[i]<=target)
                    j=m;  //找左边
                else
                    i=m+1; //找右边
            }
            else
            {
                //右边有序
                if(nums[m]<target&&nums[j-1]>=target)
                    i=m+1;
                else
                    j=m;
            }
        }
        return -1;
    }
};
