#include <iostream>
using namespace std;

// void callHello(int a=1, int b=1){
//     cout<<"Hello :)\n"<<a<<b;
// }

int FactFunc(int n = 1)
{
    int fact = 1;
    for (int i = 0; i < n; i++)
    {
        fact = fact * (i + 1);
    }
    return fact;
}

int biCoff(int n,int r){
    int val1 = FactFunc(n);
    int val2 = FactFunc(r);
    int val3 = FactFunc(n-r);

    int res = val1/(val2*val3);
    return res;
}

int main()
{
    int n = 4;
    // cout << FactFunc(n) << endl;
    cout << biCoff(n, 2) << endl;
    return 0;
}