class Solution:
    def isPalindrome(self, s: str) -> bool:
        l=[]
        s=s.lower()
        print(s)
        for i in range(len(s)):
            if(s[i]>="a" and s[i]<="z" or s[i]>="0" and s[i]<="9"):
                l.append(s[i])
        p=''
        p=''.join(l)
        l.reverse()
        q=''
        q=''.join(l) 
        if(p==q):
            return True
        else:
            return False
