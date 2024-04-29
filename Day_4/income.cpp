#include <iostream>
using namespace std;

int main()
{
    int income;
    cout << "Enter Your Income : " << endl;
    cin >> income;
    float tax;

    if (income > 1000000)
    {
        tax = income * 0.3;
    }
    else if (income > 500000)
    {
        tax = income * 0.2;
    }
    else
    {
        tax = income * 0.0;
    }

    cout << "Your Tax is : " << tax << endl;

    return 0;
}