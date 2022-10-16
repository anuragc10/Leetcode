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

int countSetBitsHack(int num){
    int bits = 0;
    while(num > 0){
        num = num & (num -1);
        bits ++;
    }
    return bits;
}

int main()
{
    int num = 15;
    cout << "num : "<< num << " binary : " << decimalToBinary(num) << endl;
    cout << countSetBitsHack(num) << endl;
    return 0;
}
