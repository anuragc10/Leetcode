string longestPalindrome(string s) {
    int n = s.size(), min_left = INT_MAX, max_len = INT_MIN;
    vector<vector<bool>> dp(n,vector<bool>(n, false));
    for(int i = 0; i < n; i++) {
        for(int j = i; j >= 0; j--) {
            dp[i][j] = (s[i] == s[j]) && ((i - j <= 2) || (i > 0 && j < n-1 && dp[i-1][j+1]));
            if(dp[i][j] && (i-j+1) > max_len){
                max_len = i-j+1;
                min_left = j;
            }
        }
    }
    return s.substr(min_left,max_len);
}
