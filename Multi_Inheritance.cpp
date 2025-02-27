#include <iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "Class A method\n";
    }
};

class B {
public:
    void showB() {
        cout << "Class B method\n";
    }
};

class C : public A, public B {
public:
    void showC() {
        cout << "Class C method\n";
    }
};

int main() {
    C obj;
    obj.showA();
    obj.showB();
    obj.showC();

    return 0;
}

Ye bhi koi code hua :)


