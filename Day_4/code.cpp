#include <iostream>
using namespace std;

int main()
{
    int a , b;
    cout<< "Enter first No"<<endl;
    cin>> a ;
    cout<< "Enter second No"<<endl;
    cin>> b ;
    if(a>b){
        cout<<"Largest No : "<<a<<endl;
    }else{
        cout<<"Largest No : "<<b<<endl;
    }
    return 0;
}