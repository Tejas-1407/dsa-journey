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

    t1.name = "Tejas";
    t1.age = 19;
    t1.Set(100000);

    cout << t1.name << endl;
    cout << t1.age << endl;
    cout << t1.Get() << endl;

    return 0;
}