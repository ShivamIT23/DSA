#include <iostream>
using namespace std;

class Car
{
public:
    string name;
    string color;
    int *mileage;

    Car()
    {
        cout << "Hello Bharat\n";
    }

    Car(string name, string color)
    {
        this->name = name;
        this->color = color;
        mileage = new int;
        *mileage = 12;
    }

    Car(Car &ori)
    {
        cout << "Hola\n";
        this->name = ori.name;
        this->color = ori.color;
        mileage = new int;
        *mileage = *ori.mileage;
    }

    void start()
    {
        cout << "The car is started.\n";
    }

    void stop()
    {
        cout << "The car is stopped.\n";
    }

    void setColor()
    {
        cout << "Enter the color of the car : ";
        cin >> color;
    }
    void getColor()
    {
        cout << "The color of the car is : " << color << endl;
    }
    void getName()
    {
        cout << "The name of the car is : " << name << endl;
    }
    void setName()
    {
        cout << "Enter the name of the car : ";
        cin >> name;
    }
};

int main()
{
    Car c1("Bugati Chiron", "White");
    Car c2(c1);

    cout << c2.name << "\n";
    cout << *c2.mileage << "\n";
    cout << c1.name << "\n";
    *c2.mileage = 10;
    cout << *c2.mileage << "\n";
    cout << *c1.mileage << "\n";
    return 0;
}