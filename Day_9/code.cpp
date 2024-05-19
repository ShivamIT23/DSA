#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int *pt = &a;
    int *pt1 = NULL;
    int **ptr = &pt;
    cout<<ptr<<"\n";
    cout<<*pt1<<"\n";  //// Segmentation Error
    cout<<*pt<<"\n";
    return 0;
}