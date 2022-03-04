//same as deletion return n-LCS(a,reverse(a));
class Solution{
  public:
    int countMin(string str){
     vector<char> a;
     vector<char> b;
     int n=str.length();
     for(int i=0;i<n;i++)
     {
         a.push_back(str[i]);
         b.push_back(str[i]);
     }
     reverse(b.begin(),b.end());
     int t[n+1][n+1];
     for(int i=0;i<n+1;i++)
     {
         for(int j=0;j<n+1;j++)
         {
             if(i==0 || j==0)
             {
                 t[i][j]=0;
             }
             else if(a[i-1]==b[j-1])
             {
                 t[i][j]=1+t[i-1][j-1];
             }
             else{
                 t[i][j]=max(t[i-1][j],t[i][j-1]);
             }
         }
     }
     return n-t[n][n];
    }
};
