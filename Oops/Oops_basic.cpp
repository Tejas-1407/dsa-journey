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










//z_rough.cpp overall oops 
// #include <iostream>
// #include <vector>
// #include <set>
// #include <climits>
// #include <algorithm>
// using namespace std ;


// class Teacher {
//     private :
//     double salery ;

//     public :
//     string name ;
//     int age ;


//     Teacher () : name ("unknown") , age (0) {
//         cout<<"Hello" << endl ;
//     }
//     Teacher (string name , int age ){
//         this -> name = name ;
//         this ->age = age ;
//         cout << "hey little one" << endl ;
//     }

//     void set (double sal){
//         if (salery >0){
//             salery = sal ;
//         }
//     }
//     double get (){
//         return salery ;
//     }
// };

// class Student : public Teacher{
//     public :
//     int rollNo  ;
//     double cgpa ;

//     Student (){
//         cout << "little one " << endl ;
//     }

//     Student (string name , int age , int rollNo ,  double cgpa) : Teacher (name , age) {
//         this ->rollNo = rollNo ;
//         this ->cgpa = cgpa ;
//     }

// };


// int main (){

//     //code 
//     Teacher t1 ;
//     Teacher t2 ("Tejas" , 18) ;
//     cout << t2.name << endl ;
//     cout << t2.age << endl ;
//     t1.set (50000) ;
//     cout << t1.get () << endl ;


//     Student s1 ("Tejas" , 18 ,19 , 6.63 ) ;
//     cout << s1.name <<endl ;
//     cout << s1.age <<endl ;
//     cout << s1.rollNo <<endl ;
//     cout << s1.cgpa <<endl ;

//     return 0 ;
// }