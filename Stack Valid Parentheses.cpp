class Solution {
public:
    bool isValid(string &s) {
        stack<char> st;
        int t=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i] =='(' || s[i]=='[' || s[i]=='{'){
                st.push(s[i]);
            }
            else if(!st.empty()){
            if(s[i]==')'){
                if(st.top()=='('){
                t=1;
                st.pop();
                }
                else{
                t=0;
                break;
                }
            }
            if(s[i]=='}'){
                if(st.top()=='{'){
                t=1;
                st.pop();
                }
                else{
                t=0;
                break;
                }
            }
            if(s[i]==']'){
                if(st.top()=='['){
                t=1;
                st.pop();
                }
                else{
                t=0;
                break;
                }
            }
        }
        else{
            t=0;
            break;
            }
        }
        if(t==1 && st.empty()){return true;}
        else{return false;}
    }
    
};


