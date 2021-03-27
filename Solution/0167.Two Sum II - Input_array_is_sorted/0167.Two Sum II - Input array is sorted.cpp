//法一：双指针法
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0,j=numbers.size()-1;
        while(i<j)
        {
            if(numbers[i]+numbers[j]==target)
                return {i+1,j+1};
            else if(numbers[i]+numbers[j]<target)
                ++i;
            else
                --j;
        }
        return {};
    }
};
//法二：二分查找法+双指针法
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0,j=numbers.size()-1;
        int m;
        while(i<j)
        {
            m= i+(j-i)/2;
            if(numbers[i]+numbers[j]==target)
                return {i+1,j+1};
            else if(numbers[i]+numbers[m]>target)
                j=m-1;
            else if(numbers[m]+numbers[j]<target)
                i=m+1;
            else if(numbers[i]+numbers[j]<target)
                ++i;
            else if(numbers[i]+numbers[j]>target)
                --j;
        }
        return {};
    }
};
