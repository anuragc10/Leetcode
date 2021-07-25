class Solution:
    def plusOne(self, d: List[int]) -> List[int]:
        x=0
        for i in range(len(d)):
            x=x*10
            x=x+d[i]
        x=x+1
        s=str(x)
        l=[]
        for j in range(len(s)):
            l.append(s[j])
        return l
