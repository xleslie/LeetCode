class Solution {
public:
    int divide(int dividend, int divisor) {
        int sign=1;
        if((dividend>0&&divisor<0)||(dividend<0&&divisor>0))
           sign=-1;
        if(dividend==INT_MIN)
        {
            if(divisor==-1)
                return INT_MAX;
            else if(divisor==1)
                return INT_MIN;
        }
        dividend=dividend>=0?-dividend:dividend;
        divisor=divisor>0?-divisor:divisor;
        int res=div(dividend,divisor);
        return sign*res;
    }
    int div(int a,int b)
    {
        if(a>b) return 0;
        int tb=b;
        int count=1;
        while(tb>=a-tb)   //避免tb+tb溢出
        {
            tb+=tb;
            count+=count;
        }
        return count+div(a-tb,b);
    }
    
};
