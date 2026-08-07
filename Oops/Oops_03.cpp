#include <iostream>
#include <string>

using namespace std ;

class Person {
    public :
    string name  ;
    int age ;
    
    Person () {
        cout << "we r all humans , but....sensei looks down.." << endl ;
    }
};

class Student : public Person {
    public :
    int rollNo ;
    double cgpa ;

    Student (string name , int age ,int rollNo , double cgpa) {
        cout << "but u r a kid little one" << endl ;
        this -> name = name ;
        this ->age = age ;
        this -> rollNo = rollNo ;
        this -> cgpa = cgpa ;
    }
};

int main () {

    //code 
    Student s1 ("tejas" , 19 , 18 , 6.63) ;
    cout << s1.name << endl ;
    cout << s1.age << endl ;
    cout << s1.rollNo << endl ;
    cout << s1.cgpa << endl ;
    return  0 ;
}