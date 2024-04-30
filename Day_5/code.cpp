#include<iostream>
using namespace std;

int main(){
    // for(int i=0;i<4;i++){
    //     cout<< "****" <<endl;
    // }

    int n;
    cout<<"Enter your no : " ;
    cin>>n;
    int i = 1;
    int digitSum=0;
    ///     For Reverse Printing

    // for(int i=0;i<n;i++){
    //     cout<<n-i<<" " ;
    // }

    ///         For Calculation Of Digits Without Using Arrays
    
    while(n != 0){
        i = n%10;
        digitSum = digitSum + i;
        n=n/10;
    }
    cout<<digitSum<<endl;

    cout<<endl;
    return 0;
}