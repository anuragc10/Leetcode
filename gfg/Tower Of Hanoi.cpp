class Solution{
    public:
    int c=0;
    // You need to complete this function

    // avoid space at the starting of the string in "move disk....."
    long long toh(int N, int from, int to, int aux) {
        // Your code here
        if(N==0)
        {
            return c;
        }
        toh(N-1,from,aux,to);
        c=c+1;
        cout<<"move disk "<< N<<" from rod "<<from<<" to rod "<<to<<endl;
        toh(N-1,aux,to,from);
    }

};

// { Driver Code Starts.

int main() {

    int T;
    cin >> T;//testcases
    while (T--) {
        
        int N;
        cin >> N;//taking input N
        
        //calling toh() function
        Solution ob;
        
        cout << ob.toh(N, 1, 3, 2) << endl;
    }
    return 0;
}
