#include<iostream>
#include<cmath>
using namespace std;

int main(){
    // long long x = 23;
    // cout<<(sizeof((x)));
    unsigned int a ;
    a = 1101;
    int length ;
    int p = a ;
    for(int j=0;a!=0;j++){
        a = a/10;
        length = j + 1;
    }

    int decimal = 0;

    for(int i=0;i<length; i++){
        decimal = decimal + ((p%10)*pow(2,i));
        p = p/10;
    }
    cout<<decimal;

    return 0;
}