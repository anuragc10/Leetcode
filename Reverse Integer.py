class Solution:
    def reverse(self,x):
        rev=0
        a=0
        if(x<0):
            x=x*(-1)
            while(x>0):
                a = x % 10
                rev = rev * 10 + a
                x = x // 10
            if(rev>=-2**31 and rev<=2**31-1):
                return(rev*(-1))
            else:
                return 0
        else:
            while(x>0):
                a = x % 10
                rev = rev * 10 + a
                x = x // 10
            if(rev>=-2**31 and rev<=2**31-1):
                return rev
            else:
                return 0
        
        
        
