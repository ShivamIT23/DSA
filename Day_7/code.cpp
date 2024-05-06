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

int main()
{
    int n = 6;
    cout << FactFunc(n) << endl;
    return 0;
}