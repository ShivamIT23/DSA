#include <iostream>
using namespace std;

int main()
{
    int student[3][3] = {{100, 100, 100}, {85, 74, 89}, {63, 72, 65}};

    // cout<<student[1][1]<<"\n";

    int arr[3][4];

    cout<<"Enter array elements : \n";
    for(int i =0 ;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"\n";
    
    for(int i =0 ;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<",";
        }
    }
    return 0;
}