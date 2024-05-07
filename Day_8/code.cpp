#include<iostream>
using namespace std;

int BinaryToDecNum(int n ){
    int decNum = 0;
    int pow = 1;
    for(int i =0 ; n!=0;i++){
        int lastDigit = n%10;
        decNum = decNum + lastDigit*pow;
        pow = pow*2;
        n = n/10;
    }

    return decNum;
}

int DecimalToBinary(int n){
    int pow = 1;
    int binNum = 0;
    for(int i =0 ; n!=0;i++){
        int lastDigit = n%2;
        binNum = lastDigit*pow + binNum;
        n = n/2;
        pow = pow*10;
    }

    return binNum;
}

int main(){
    // long long x = 23;
    // cout<<(sizeof((x)));
    // unsigned int a ;
    // a = 10001;
    // int length ;
    // int p = a ;
    // for(int j=0;a!=0;j++){
    //     a = a/10;
    //     length = j + 1;
    // }

    // int decNum = 0;

    // for(int i=0;i<length; i++){
    //     decNum = decNum + ((p%10)*pow(2,i));
    //     p = p/10;
    // }
    // cout<<decNum;

    int biNum = 100001;
    int deciNum = 13;
    cout<<BinaryToDecNum(biNum)<<endl;
    cout<<DecimalToBinary(deciNum);

    return 0;
}