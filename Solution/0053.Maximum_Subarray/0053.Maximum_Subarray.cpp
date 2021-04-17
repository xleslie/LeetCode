//法一：动态规划法
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_num=nums[0];
        for(int i=1;i<nums.size();++i)
        {
            nums[i]=max(nums[i-1]+nums[i],nums[i]);
            if(nums[i]>max_num) max_num=nums[i];
        }
        return max_num;
        
    }
};

//法二：分治法1
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        return mySubArray(nums,0,nums.size()); 
    }
    int mySubArray(vector<int>& nums,int x,int y){
        if(y-x==1)
            return nums[x];
        int m=x+(y-x)/2;
        int maxSum = max(mySubArray(nums,x,m),mySubArray(nums,m,y));
        int v=0,L=nums[m-1],R=nums[m];
        for(int i=m-1;i>=x;--i)
            L=max(L,v+=nums[i]);
        v=0;
        for(int i=m;i<y;++i)
            R=max(R,v+=nums[i]);
        return max(maxSum,L+R);
    }
};

//法三：分治法2
class Solution {
public:
    struct Status{
        int lSum,rSum,iSum,mSum;
    };
    Status pushUp(Status lSub,Status rSub)
    {
        int lSum=max(lSub.lSum,lSub.iSum+rSub.lSum);
        int rSum=max(rSub.rSum,rSub.iSum+lSub.rSum);
        int iSum=lSub.iSum+rSub.iSum;
        int mSum=max(max(lSub.mSum,rSub.mSum),lSub.rSum+rSub.lSum);
        return (Status){lSum,rSum,iSum,mSum};
    }
    Status get(vector<int>& nums,int l,int r)
    {
        if(r-l==1)
            return (Status){nums[l],nums[l],nums[l],nums[l]};
        int m=l+(r-l)/2;
        Status lSub=get(nums,l,m);
        Status rSub=get(nums,m,r);
        return pushUp(lSub,rSub);
        
    }
    int maxSubArray(vector<int>& nums) {
        return get(nums,0,nums.size()).mSum;
    }
    
};
