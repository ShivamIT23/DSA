#include<iostream>
using namespace std;

int main(){
    int a , b;
    float result;
    char oper;
    cout<<"Enter first no. : "<<endl;
    cin>>a;
    cout<<"Enter second no. : "<<endl;
    cin>>b;
    cout<<"Enter Operator : "<<endl;
    cin>>oper;

    switch(oper) {
        case '+':
            result = a + b;
            cout<<"Addition is : "<<result<<endl;
            break;
        case '-':
            result = a - b;
            cout<<"Subtraction is : "<<result<<endl;
            break;
        case '*':
            result = a * b;
            cout<<"Multiplication is : "<<result<<endl;
            break;
        case '/':
            result = a / b;
            cout<<"Division is : "<<result<<endl;
            break;
        default:
            cout<<"Invalid Operator"<<endl;
    }
    return 0;
}