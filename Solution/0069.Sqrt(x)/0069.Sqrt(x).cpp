//法一：二分查找法
class Solution {
public:
    int mySqrt(int x) {
        if(x==0||x==1)
            return x;
        int i=1,j=x/2+1;
        int m;
        while(i<j)
        {
            m=i+(j-i)/2;
            if(x/m<m) j=m;
            else{
                if(x/(m+1)<(m+1))
                    return m;
                else i=m+1;
            }
        }
        return -1;
        
    }
};


//法二：牛顿迭代法
class Solution {
public:
    int mySqrt(int x) {
        if(x==0||x==1)
            return x;
        int r=x;
        while(r>x/r)
            r=0.5*r+0.5*x/r;
        return r;
    }
};
