// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
  public:
    string reverseEqn (string s)
        {
            //code here.
            stack<string> stack;
            for(int i=0;i<s.length();i++)
            {
                string str;
                for(int j=i; j<s.length();j++)
                {
                    if (s[j] == '+' || s[j] == '-' || s[j] == '/' || s[j] == '*' || j==s.length()-1)
                    {
                        if(j==s.length()-1){
                            str=str+s[j];
                            stack.push(str);
                        }
                        if(j!=s.length()-1){
                            stack.push(str);
                            string s1="";
                            s1=s1+s[j];
                            stack.push(s1);
                            str.clear();
                            i=j+1; 
                        }
                    }
                    else
                    {
                        str=str+s[j];
                    }
                }
                
            }
            string ans="";
            while (!stack.empty()) {
                ans=ans+stack.top();
                stack.pop();
             }
             int n=s.length();
             int a1=ans.length();
             int b=a1-n;
             string s2;
             int p;
             for(p=b;p<ans.length();p++)
             {
                 s2=s2+ans[p];
             }
             
             return s2;
        }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends
