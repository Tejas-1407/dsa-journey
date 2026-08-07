//professional way 
// note : an inherted class can access the member funtion and variables
#include <iostream>
#include <string>

using namespace std ;

class Person {
    public :
    string name ;
    int age ;

    Person (string name , int age) {
        cout << "hello im a person" << endl  ;
        this ->name = name ;
        this -> age = age ;
    } 

    void FUCK (){
        cout << "this function is from parent class person" <<endl ;
    }
} ;


class Student : public Person {
    public : 
    int rollNo ;
    double cgpa ;

    Student (string name , int age , int rollNo , double cgpa) 
    : Person (name , age ) 
    {
        cout << "hello i m student" << endl;
        this -> rollNo = rollNo ;
        this -> cgpa =  cgpa ;
    }

};

int main () {

    //code 
    Student s1 ("Tejas" , 19 , 18 , 6.63 ) ;
    cout << s1.name << endl ;
    cout << s1.age << endl ;
    cout << s1.rollNo << endl ;
    cout << s1.cgpa << endl ;

    s1.FUCK() ; // inherited class can access parent members ;
    return 0 ;
}