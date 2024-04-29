#include<iostream>
using namespace std;

int main(){
    int a , b, c;
    cout<<"enter no 1 : "<<endl;
    cin>>a;
    cout<<"enter no 2 : "<<endl;
    cin>>b;
    cout<<"enter no 3 : "<<endl;
    cin>>c;

    if(a>=b && a>=c){
        cout<<"Largest no is : "<<a<<endl;
    }
    else if (b>=c){
        cout<<"Largest no is : "<<b<<endl;
    }
    else {
        cout<<"Largest no is : "<<c<<endl;
    }
    return 0;
}