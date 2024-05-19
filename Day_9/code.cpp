#include<iostream>
using namespace std;

void changeValA(int a){
    a = 20;
    cout<<a<<"\n";
}

void changePointerA(int *a){
    *a = 20;
    cout<<*a<<"\n";
}

void changeReferenceA(int &c){
    c = 25;
    cout<<c<<"\n";
}

int main(){
    int a = 10;

    changeValA(a);
    cout<<a<<"\n";

    int *ptr = &a;

    changePointerA(ptr);
    cout<<a<<"\n";

    changeReferenceA(a);
    cout<<a<<"\n";

    // int *pt = &a;
    // int *pt1 = NULL;
    // int **ptr = &pt;
    // cout<<ptr<<"\n";
    // cout<<*pt1<<"\n";  //// Segmentation Error
    // cout<<*pt<<"\n";
    return 0;
}