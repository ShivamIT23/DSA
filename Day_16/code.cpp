#include <iostream>
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
    int pos = 1 << key;

    if ((n & pos) > 0)
    {
        cout << "1";
    }
    else
    {
        cout << "0";
    }
}

void SetIthBit(int n, int key)
{
    int pos = 1 << key;

    n = (n | pos);
    cout << n << "\n";
}

void ClearIthBit(int n, int key)
{
    int pos = ~(1 << key);

    n = (n & pos);
    cout << n << "\n";
}

bool IsPowerOf2(int n)
{
    if (!((n) & (n - 1)))
    {
        return true;
    }
    else
    {
        return false;
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
    int n = 7;
    int i = 2;
    OddOrEven(n);
    // GetIthBit(n, i);
    // SetIthBit(n, i);
    // ClearIthBit(n, i);
    cout << IsPowerOf2(4) << "\n";
    cout << IsPowerOf2(12) << "\n";
    cout << IsPowerOf2(16) << "\n";
    return 0;
}