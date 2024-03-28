#include<bits/stdc++.h>
using namespace std;

class Vehicle
{
public:
    string fuelType;
    int capacity;

    void display()
    {
        cout << "Fuel Type: " << fuelType << endl;
        cout << "Capacity: " << capacity << " persons" << endl;
    }
};

class Car : public Vehicle
{
public:
    int numSeats;

    void display()
    {
        cout << "Number of Seats: " << numSeats << endl;
    }
};

class Sedan : public Car
{
public:
    int bootSpace;

    void display()
    {
        cout << "Boot Space: " << bootSpace << " liters" << endl;
    }
};

int main()
{
    Sedan car1;
    car1.fuelType = "Petrol";
    car1.capacity = 40;
    car1.numSeats = 40;
    car1.bootSpace = 500;
    cout<<"Car1 details"<<endl<<endl;
    car1.Vehicle::display();
    car1.Car::display();
    car1.Sedan::display();


    cout<<endl;


    Sedan car2;
    car2.fuelType = "Diesel";
    car2.capacity = 25;
    car2.numSeats = 25;
    car2.bootSpace = 250;
    cout<<"Car2 details"<<endl<<endl;
    car2.Vehicle::display();
    car2.Car::display();
    car2.Sedan::display();

    return 0;
}
