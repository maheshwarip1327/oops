#include <iostream>
using namespace std;


class Vehicle
{
protected:
    string brand;
    int speed;

public:
    void setVehicleDetails(string b, int s)
    {
        brand = b;
        speed = s;
    }

    void displayVehicle()
    {
        cout << "Brand: " << brand << endl;
        cout << "Speed: " << speed << " km/h" << endl;
    }
};


class Car : public Vehicle
{
private:
    int numDoors;

public:
    void setCarDetails(string b, int s, int d)
    {
        brand = b;
        speed = s;
        numDoors = d;
    }

    void displayCar()
    {
        cout << "\nCar Details:" << endl;
        displayVehicle();
        cout << "Number of Doors: " << numDoors << endl;
    }
};


class Motorcycle : public Vehicle
{
private:
    bool hasSidecar;

public:
    void setMotorcycleDetails(string b, int s, bool sc)
    {
        brand = b;
        speed = s;
        hasSidecar = sc;
    }

    void displayMotorcycle()
    {
        cout << "\nMotorcycle Details:" << endl;
        displayVehicle();
        cout << "Has Sidecar: " << (hasSidecar ? "Yes" : "No") << endl;
    }
};


int main()
{
    Car c1;
    Motorcycle m1;

    c1.setCarDetails("Toyota", 180, 4);
    m1.setMotorcycleDetails("Yamaha", 120, false);

    c1.displayCar();
    m1.displayMotorcycle();

    return 0;
}