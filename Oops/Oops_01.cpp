// You've learned these OOP concepts today ✅

// ✔ Class

// ✔ Object

// ✔ Data Members

// ✔ Member Functions

// ✔ Constructor

// ✔ Public

// ✔ Private

// ✔ Encapsulation (Setter & Getter)

// That's honestly about 60–70% of the OOP you'll use in beginner DSA code.

#include <iostream>
#include <string>
using namespace std;

class Teacher {
private:
    double salary;

public:
    string name;
    int age;

    Teacher() {
        name = "unknown" ;
        age = 0 ;
        salary = 0;
        cout << "Hello Sensei\n";
    }

    void Set(double money) {
        if (money >= 0)
            salary = money;
    }

    double Get() {
        return salary;
    }
};

int main() {
    Teacher t1;

    t1.name = "Tejas Batav";
    t1.age = 19;
    t1.Set(500000);

    cout << t1.name << endl;
    cout << t1.age << endl;
    cout << t1.Get() << endl;

    Teacher t2 ; //default values overview
    cout << t2.name << endl ;
    cout << t2.age << endl ;
    cout << t2.Get() <<endl ;
    return 0;
}