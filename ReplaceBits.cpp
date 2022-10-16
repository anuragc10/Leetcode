#include<bits/stdc++.h>
using namespace std;
string decimalToBinary(int num)
{
    string str;
      while(num){
      if(num & 1) // 1
        str+='1';
      else // 0
        str+='0';
      num>>=1; // Right Shift by 1 
    }   
    reverse(str.begin(), str.end());
      return str;
}

void clearBitsInRange(int & num, int i, int j){
    int a = (-1 << i);
    int b = (1 << i) - 1;
    int mask = a | b;
    // cout << decimalToBinary(mask) << endl;
    num = num & mask;
    

}

int main()
{
    int num = 24;
    cout << "num : "<< num << " binary : " << decimalToBinary(num) << endl;
    int i = 3;
    clearBitsInRange(num, 2, 4);
    cout << "num : "<< num << " binary : " << decimalToBinary(num) << endl;
    return 0;
}
