#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // 1. Default Constructor
    Student() {
        name = "Unknown";
        age = 0;
        cout << "Default Constructor Called\n";
    }

    // 2. Parameterized Constructor
    Student(string n, int a) {
        name = n;
        age = a;
        cout << "Parameterized Constructor Called\n";
    }

    // 3. Copy Constructor
    Student(const Student &s) {
        name = s.name;
        age = s.age;
        cout << "Copy Constructor Called\n";
    }

    // Function to display student details
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1;  // Calls Default Constructor
    s1.display();

    Student s2("Abhi", 19);  // Calls Parameterized Constructor
    s2.display();

    Student s3 = s2;  // Calls Copy Constructor
    s3.display();

    return 0;
}

//________ OutPut ________
//Default Constructor Called
//Name: Unknown, Age: 0
//Parameterized Constructor Called
//Name: Abhi, Age: 19
//Copy Constructor Called
//Name: Abhi, Age: 19

 

//You know who I am:)


