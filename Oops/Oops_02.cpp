#include <iostream>
#include <string>
using namespace std ;

class Student {
    public :

    string name ;
    int rollNo ;
    double cgpa ;

    //default constructor 
    Student (){
        name = "unknown" ;
        rollNo = 0 ;
        cgpa = 0.0 ; 
        cout << "hello sensei" <<endl ;
    }
    //another way to write professional way
    // Student() :name("unknown"), rollNo (0) ,cgpa(0.0){
    //     cout << "hello sensei " << endl ;
    // }

    //parameterized constructor 
    Student (string name , int rollNo , double cgpa){
        this -> name = name  ;
        this -> rollNo = rollNo ;
        this -> cgpa = cgpa  ;
        cout << "hello sensei _02 para constructor" << endl ;
    }


    //tiny experiment 
    Student (string name ){
        name = name ;

        cout << "parameter : " << name << endl ; //will print tejas
        cout << "object : " <<this -> name << endl ; //will print nothing , _blank _
    }
};


int main (){

    //code 
    Student s1 ;
    cout << s1.name << endl ;
    cout << s1.rollNo << endl ;
    cout << s1.cgpa << endl ;

    Student s2 ("Tejas" , 18 ,6.63) ;
    cout << s2.name << endl ;
    cout << s2.rollNo << endl ;
    cout << s2.cgpa << endl ;

    Student s3 ("tejas") ;
    return 0;
}