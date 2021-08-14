// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        stack<string> stack;
        for(int i=0;i<s.length();i++){
            string str;
            for(int j=i;j<s.length();j++){
                if(s[j]=='.' || j==s.length()-1)
                {
                    if(j==s.length()-1){
                        str=str+s[j];
                        stack.push(str);
                    }
                    else{
                        stack.push(str);
                        stack.push(".");
                        str.clear();
                        i=j;
                    }
                    
                }
                else
                {
                    str=str+s[j];  
                }
            }
        }
        string ans;
        while(!stack.empty()){
            ans=ans+stack.top();
            stack.pop();
        }
        string a1;
        int a=ans.length()-s.length();
        for(int i=a;i<ans.length();i++){
            a1=a1+ans[i];
        }
        return a1;
    } 
};

// { Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends
