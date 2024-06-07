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
    int mask = 1 << key;

    if ((n & mask) > 0)
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
    int mask = 1 << key;

    n = (n | mask);
    cout << n << "\n";
}

void ClearIthBit(int n, int key)
{
    int mask = ~(1 << key);

    n = (n & mask);
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

void ChangeIthBitWithValue(int n, int key, int val)
{
    n = (n & ~(1 << key)) | (val << key);
    cout << n << "\n";
}

void ClearIBits(int n, int key)
{

    ////Shivam's Approach

    // int i =0;
    // int mask = 0;
    // while(i<key){
    //     mask = mask | (1<<i++);
    // }
    // n = (n & ~mask);

    ////Correct Way
    int mask = (~0) << key;
    n = (n & mask);

    cout << n << "\n";
}

int CountSetBits(int n)
{
    int count = 0;
    while (n > 0)
    {
        count += n & 1;
        n = n >> 1;
    }
    return count;
}

int FastExponential(int n, int pow)
{
    int ans = 1;

    while (pow > 0)
    {
        int lastBit = pow & 1;
        if (lastBit)
        {
            ans = ans * n;
        }
        n = n * n;
        pow = pow >> 1;
    }
    cout << ans << "\n";
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
    int n = 32;
    int i = 2;
    int val = 1;
    // OddOrEven(n);
    // GetIthBit(n, i);
    // SetIthBit(n, i);
    // ClearIthBit(n, i);
    // cout << IsPowerOf2(4) << "\n";
    // cout << IsPowerOf2(12) << "\n";
    // cout << IsPowerOf2(16) << "\n";

    // ChangeIthBitWithValue(n,i,val);
    // ClearIBits(n,i);
    cout << CountSetBits(n) << "\n";
    FastExponential(3, 5);
    return 0;
}