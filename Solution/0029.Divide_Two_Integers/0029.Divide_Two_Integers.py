class Solution:
    def divide(self, dividend: int, divisor: int) -> int:
        if dividend==-2**31 and divisor==-1:
            return 2**31-1;
        sign = 1;
        if (dividend>0 and divisor<0) or (dividend<0 and divisor>0):
            sign=-1
        if dividend >0:
            dividend=-dividend
        if divisor>0:
            divisor=-divisor
        res = div(dividend,divisor)
        return res*sign
    
def div(dividend,divisor):
        if dividend>divisor: return 0
        tb = divisor
        count =1
        while tb>=dividend-tb:
            tb =tb+tb
            count =count+count
        return count+div(dividend-tb,divisor)
