void StackQueue :: push(int x)
{
    // Your Code
    s1.push(x);
}

//Function to pop an element from queue by using 2 stacks.
int StackQueue :: pop()
{
        // Your Code 
        if(s1.empty())
        {
            return -1;
        }
        while(!s1.empty())
        {
            int a=s1.top();
            s2.push(a);
            s1.pop();
        }
        int ans=s2.top();
        if(s2.top()){
            ans=s2.top();
        }
        s2.pop();
        while(!s2.empty())
        {
            int a=s2.top();
            s1.push(a);
            s2.pop();
        }
        return ans;
        
}
