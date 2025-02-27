#include <iostream>
using namespace std;

class Demo {
public:
    // Constructor
    Demo() {
        cout << "Constructor Called!\n";
    }

    // Destructor
    ~Demo() {
        cout << "Destructor Called!\n";
    }
};

int main() {
    Demo obj; // Object created, constructor is called
    return 0; // Object goes out of scope, destructor is called
}
