#include <iostream>
#include <cmath>
using namespace std;

void OddOrEven(int n)
{
    if (n & 1)
    {
        cout << "odd\n";
    }
    else
    {
        cout << "even\n";
    }
}

void GetIthBit(int n, int key)
{
    int pos = 1;
    for (int i = 0; i < key; i++)
    {
        pos *= 2;
    }
    if ((n & pos) > 0)
    {
        cout << "1";
    }
    else
    {
        cout << "0";
    }
}

int main()
{
    // cout<<(3 & 5)<<"\n";
    // cout<<(3 | 5)<<"\n";
    // cout<<(3 ^ 5)<<"\n";
    // cout<<(~3)<<"\n";
    // cout<<(~0)<<"\n";
    // cout<<(~5)<<"\n";   /// 1's Complement  Bistwise not (~ = tilde)
    // cout<<(~5273647)<<"\n";   /// msb = most significant bit
    // cout<<(8<<3)<<"\n";
    // cout<<(32>>2)<<"\n";
    // cout<<(7>>2)<<"\n"; //1
    // cout<<(7>>3)<<"\n"; //0
    int n = 8;
    int i = 3;
    OddOrEven(n);
    GetIthBit(n, i);
    return 0;
}