#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    float cgpa;

public:
    /// Methods
    void getPercentage()
    {
        cout << (cgpa * 10) << "%\n";
    }

    /// Setters
    void setName(string nameVal)
    {
        name = nameVal;
    }

    void setCgpa(float cgpaVal)
    {
        cgpa = cgpaVal;
    }

    /// Getters
    string getName()
    {
        return name;
    }

    float getCgpa()
    {
        return cgpa;
    }
};

class Car {
    string name;
    string color;

    public :

    Car(){
        cout<<"Hello Bharat\n";
    }

    Car(string name ,string color){
        this->name = name ;
        this->color = color ;
    }

    void start(){
        cout << "The car is started.\n";
    }

    void stop(){
        cout << "The car is stopped.\n";
    }

    void setColor(){
        cout << "Enter the color of the car : ";
        cin >> color ;
    }
    void getColor(){
        cout << "The color of the car is : " << color << endl ;
    }
    void getName(){
        cout << "The name of the car is : " << name << endl ;
    }
    void setName(){
        cout << "Enter the name of the car : ";
        cin >> name ;
    }
};

class User {
    private:
    int id;
    string password;

    public:
    string username;

    User(int id){
        this->id = id ;
    }

    string getPassword(){
        return password ;
    }

    void setPassword(string password){
        this->password = password ;
    }
};

int main()
{
    // Student s1;
    // cout << s1.getCgpa() << "\n";
    // s1.getPercentage();
    // // cout <<sizeof(s1) << "\n";

    // Car c01;
    // Car c1("Bugati Chiron","red");
    // c01.getName();
    // c1.getName();

    User user1(111122222);
    user1.username = "Shivam";
    user1.setPassword("shivam123");
    cout<<user1.getPassword()<<"\n";

    return 0;
}