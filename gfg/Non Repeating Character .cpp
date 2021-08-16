class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string s)
    {
       //Your code here
       int arr[10000];
       for(int i=0;i<s.length();i++)
       {
           int ind=int(s[i])-96;
           arr[ind]++;
       }
       for(int j=0;j<s.length();j++)
       {
           int ind1=int(s[j])-96;
           if(arr[ind1] ==1)
           {
               return s[j];
               break;
           }
       }
       
       return '$';
    }

};
