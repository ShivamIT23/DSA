#include <iostream>
#include <cmath>
#define Swap(x, y, z) {z = x; x = y; y = z;}
using namespace std;

void ArmStrongNumber(int n)
{
    int sum = 0;
    int temp = 0;
    int num = n;
    while (num > 0)
    {
        temp = num % 10;
        sum += temp * temp * temp;
        num = num / 10;
    }
    cout << (sum == n ? "Armstrong Number" : "Not Armstrong Number") << "\n";
}

int main()
{

    ////  CHECK IF A NUMBER IS POSITIVE , NEGATIVE AND ZERO

    /* int n;
    cout<< "Enter a number: ";
    cin>>n;

    if(n>0){
        cout<< "Number is Positive";
    }else if(n<0) {
        cout<< "Number is Negative";
    }else{
        cout<< "Number is Zero";
    }  */

    // ArmStrongNumber(321);
    int x = 1, y = 2, z = 3;
    Swap(x, y, z);
    cout<<x<<" "<<y<<" "<<z<<" "<<"\n";

    ////    LEAP YEAR OR NOT

    /* int year;
    cout<< "Enter a year: ";
    cin>>year;

    if(year%4==0){
        cout<< "Leap Year";
    }else{
        cout<< "Not a Leap Year";
    } */

    ////    ARMSTRONG NUMBER

    /* int n;
    cout << "Enter a number: ";
    cin >> n; */

    ////    ARMSTRONG NUMBER

    // int n;

    return 0;
}

// int main()
// {
//     int a = 63, b = 36;
//     bool x = (a < b) ? true : false;
//     int y = (a > b) ? a : b;
//     cout << x << "," << y << endl;
//     return 0;
// }

// int main()
// {
//     int a = 5;
//     if (++a * 5 <= 25)
//     {
//         cout << "Hello\n";
//     }
//     else
//     {
//         cout << "Bye\n";
//     }
// }