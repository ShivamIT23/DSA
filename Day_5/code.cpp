#include<iostream>
using namespace std;

int main(){

    /// For Printing Square Pattern

    // for(int i=0;i<4;i++){
    //     cout<< "****" <<endl;
    // }

    int n;
    cout<<"Enter your no : " ;
    cin>>n;
    // int i;
    // int digitSum=0;

    ///     For Reverse Printing

    // for(int i=0;i<n;i++){
    //     cout<<n-i<<" " ;
    // }

    ///         For Calculation Of Digits Without Using Arrays
    
    // while(n != 0){
    //     i = n%10;
    //     digitSum += i;
    //     n=n/10;
    // }
    // cout<<digitSum<<endl;

    // cout<<endl;

    ///         For Calculation Of Digits(Odd) Without Using Arrays

    //  while(n != 0){
    //     i = n%10;
    //     if(i%2!=0){
    //        digitSum += i; 
    //     }
    //     n=n/10;
    // }
    // cout<<digitSum<<endl;

    ///     Reverse A number And Save It in Another No

    // int newNo = 0;

    // while (n!=0)
    // {
    //     i = n%10;
    //     newNo = newNo*10 + i;
    //     n = n/10;
    // }
    
    // cout<<newNo<<endl;


    ///     Prime No.   

    bool isPrime = true;

    for(int i=2;i<(n/2);i++){
        if(n%i==0){
            isPrime = false;
            break;
        }
    }

    cout<<n<< " is "<<(isPrime ? "Prime" : "Not Prime")<<endl;
    return 0;
}