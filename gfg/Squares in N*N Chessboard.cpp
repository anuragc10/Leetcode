class Solution {
  public:
    long long squaresInChessBoard(long long n) {
        // code here
        long long int s;
        for(long long int i=n;i>=1;i--)
        {
            s=s+i*i;
        }
        return s;
    }
};
