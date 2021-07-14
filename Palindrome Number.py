class Solution:
    def isPalindrome(self, x):
        st=str(x)
        s=''
        l=[]
        for i in range(len(st),0,-1):
            l.append(st[i-1])
        
        s=''.join(l)
        if(s==st):
            return(1)
        else:
            return 0
    
