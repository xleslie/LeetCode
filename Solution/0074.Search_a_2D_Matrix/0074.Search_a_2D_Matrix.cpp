//法一
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int i=0,j=m*n;
        int mid,r,c;
        while(i<j)
        {
            mid=i+(j-i)/2;
            r=mid/n;
            c=mid%n;
            if(matrix[r][c]==target) return true;
            else if(matrix[r][c]>target) j=mid;
            else i=mid+1;
        }
        return false;
    }
};
//法二
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int top=0,bottom=matrix.size();
        int left=0,right=matrix[0].size();
        int m1,m2,res=-1;
        while(top<bottom)
        {
            m1=top+(bottom-top)/2;
            if(matrix[m1][0]>target) bottom=m1;
            else if(matrix[m1][right-1]<target) top=m1+1;
            else if(matrix[m1][0]<=target&&matrix[m1][right-1]>=target)
            {
                res=m1;
                break;
            }
        }
        if(top==bottom)
            return false;
        while(left<right)
        {
            m2=left+(right-left)/2;
            if(matrix[res][m2]==target) return true;
            else if(matrix[res][m2]<target) left=m2+1;
            else if(matrix[res][m2]>target) right=m2;
         }
        return false;     
    }
};
