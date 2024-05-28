#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char str1[100] = "hello ";
    char str2[100] = "world";
    char str[100];
    strcpy(str , "holla");
    strcat(str1 , str2);
    cout<<strcmp(str1,str2)<<"\n";
    cout<<str1<<"\n";
    cout<<str2<<"\n";
    cout<<str<<"\n";
    return 0;
}