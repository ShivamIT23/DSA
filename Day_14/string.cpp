#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main(){
    string str = "hello";
    cout<<str<<"\n";
    cout<<str.length()<<"\n";
    str = "yellop cmdpdmfc";
    cout<<str<<"\n";
    cout<<str.length()<<"\n";
    for(int i =0 ;i<str.length();i++){
        cout<<str[i]<<" ";
    }
    cout<<"\n";

    for (char ch : str){
        cout<<ch<<"-";
    }
    cout<<"\n";

    cout<<str.at(1)<<"\n";
    cout<<str.substr(3,5)<<"\n";
    cout<<str.find("m")<<"\n";
    cout<<str.find("m" , 10)<<"\n";

    return 0;
}