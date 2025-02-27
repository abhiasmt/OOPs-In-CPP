#include <iostream>
using namespace std;

// Abstract class (Abstraction)
class Vehicle {
protected:
    string brand;  // Encapsulation (protected data member)
public:
    Vehicle(string b) : brand(b) {} // Constructor
    virtual void showDetails() = 0; // Pure virtual function (Polymorphism)
};

// Derived class (Inheritance)
class Car : public Vehicle {
private:
    int speed;
public:
    Car(string b, int s) : Vehicle(b), speed(s) {}  // Constructor with initialization
    void showDetails() override {  // Function Overriding (Polymorphism)
        cout << "Car Brand: " << brand << ", Speed: " << speed << " km/h" << endl;
    }
};

// Another derived class
class Bike : public Vehicle {
private:
    int cc;
public:
    Bike(string b, int c) : Vehicle(b), cc(c) {}
    void showDetails() override {
        cout << "Bike Brand: " << brand << ", Engine: " << cc << "cc" << endl;
    }
};

int main() {
    Car myCar("Tesla", 250);  // Object creation
    Bike myBike("Yamaha", 150);

    myCar.showDetails();  // Polymorphism in action
    myBike.showDetails();

    return 0;
}


// Ye bhi koi code hua :)

