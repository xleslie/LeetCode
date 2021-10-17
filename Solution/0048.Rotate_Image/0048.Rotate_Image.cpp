//法一：多次原地旋转
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<n/2;i++)
        {
            for(int j=0;j<(n+1)/2;j++)
            {
                int temp=matrix[i][j];
                matrix[i][j]=matrix[n-1-j][i];
                matrix[n-1-j][i]=matrix[n-1-i][n-1-j];
                matrix[n-1-i][n-1-j]=matrix[j][n-1-i];
                matrix[j][n-1-i]=temp;
            }
        }
    }
};
//法二：两次翻转
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<n/2;++i)
        {
            vector<int> temp=matrix[i];
            matrix[i]=matrix[n-1-i];
            matrix[n-1-i]=temp;
        }
        for(int i=0;i<n;++i)
        {
            for(int j=i+1;j<n;++j)
            {
                int temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }

    }
};
