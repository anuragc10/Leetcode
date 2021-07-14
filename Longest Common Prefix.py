class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        s=''
        y=1
        strs.sort(key=len)
        for i in range(len(strs[0])):
            ch=strs[0][i]
            for j in range(1,len(strs)):
                if(ch==strs[j][i]):
                    y=1
                else:
                    y=0
                    break
            if(y==1):
                s=s+ch
            else:
                break
        return s
                
