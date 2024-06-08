#include <iostream>
using namespace std;

// class Car
// {
// public:
//     void start()
//     {
//         cout << "The car is started.\n";
//     }

//     void stop()
//     {
//         cout << "The car is stopped.\n";
//     }

//     void setColor()
//     {
//         cout << "Enter the color of the car : ";
//         cin >> color;
//     }
//     void getColor()
//     {
//         cout << "The color of the car is : " << color << endl;
//     }
//     void getName()
//     {
//         cout << "The name of the car is : " << name << endl;
//     }
//     void setName()
//     {
//         cout << "Enter the name of the car : ";
//         cin >> name;
//     }

//     string name;
//     string color;
//     int *mileage;

//     Car()
//     {
//         cout << "Hello Bharat\n";
//     }

//     Car(string name, string color)
//     {
//         this->name = name;
//         this->color = color;
//         mileage = new int;
//         *mileage = 12;
//     }

//     Car(Car &ori)
//     {
//         cout << "Hola\n";
//         this->name = ori.name;
//         this->color = ori.color;
//         mileage = new int;
//         *mileage = *ori.mileage;
//     }

//     ~Car()
//     {
//         cout << "Object Deletion...\n";
//         if (mileage != NULL)
//         {
//             delete mileage;
//             mileage = NULL;
//         }
//     }
// };

// int main()
// {
//     Car c1("Bugati Chiron", "White");
//     Car c2(c1);

//     cout << c2.name << "\n";
//     cout << *c2.mileage << "\n";
//     cout << c1.name << "\n";
//     *c2.mileage = 10;
//     cout << *c2.mileage << "\n";
//     cout << *c1.mileage << "\n";
//     cout << "hello\n";
//     return 0;
// }

// class Animal
// {
// public:
//     string color;

//     void eat()
//     {
//         cout << "EATS\n";
//     }

//     void breathe()
//     {
//         cout << "BREATHE\n";
//     }
// };

// class Fish : public Animal
// {
// public:
//     int fins;

//     void swim()
//     {
//         cout << "SWIM\n";
//     }
// };

// class Mammal : public Animal {
//     public:
//     string bloodType ;
//     Mammal(){
//         bloodType = "Warm";
//     }
// };

// class Dog : public Mammal {
//     public:
//     void tailWag(){
//         cout << "Dog wag it's tail\n";
//     }
// };

////Multiple Inheritance

class Teacher
{
public:
    int salary;
    string subject;
};

class Student
{
public:
    int rollNo;
    float cgpa;
};

class TA : public Teacher, public Student
{
public:
    string name;
};

int main()
{
    // Fish bubble;
    // bubble.color = "Blue";
    // bubble.fins = 4;
    // bubble.eat();
    // bubble.breathe();
    // bubble.swim();

    // Dog d1;
    // d1.tailWag();
    // d1.eat();
    // d1.breathe();
    // cout<<d1.bloodType<<"\n";

    TA ta1;
    ta1.name = "shivam";
    ta1.salary = 50000;
    ta1.subject = "Math";
    ta1.rollNo = 101;
    ta1.cgpa = 8.5;

    cout << ta1.name << "\n";
    cout << ta1.salary << "\n";
    cout << ta1.subject << "\n";
    cout << ta1.rollNo << "\n";
    cout << ta1.cgpa << "\n";

    return 0;
}