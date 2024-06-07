#include<iostream>
using namespace std;

class Student {
    string name;
    float cgpa;

    ///Methods
    void getPercentage() {
        cout << (cgpa * 10) << "%\n";
    }
};

int main(){
    Student s1;
    cout <<sizeof(s1) << "\n";
    return 0;
}