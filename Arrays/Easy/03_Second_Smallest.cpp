// second smallest 

#include <iostream>
#include <vector>
#include <climits>
using namespace std ;


int smallest (vector <int> &v){
    int tiny = v[0] ;
    for (int i =0 ; i< v.size() ;i++){
        if (v[i] < tiny ){
            tiny = v[i];
        }
    }
    return tiny ;
}

int SS (vector <int > &v){
    int tiny = smallest(v);
    int SS = INT_MAX;
    for (int i= 0 ;i  < v.size() ; i++){
        if (v[i]< SS && v[i]>tiny){//basically v[i]!=tiny != SS
            SS = v[i];
        }
    }
    return SS ;
}

int OSS(vector <int> &v){
    int tiny = v[0] ;
    int SS = INT_MAX ;

    for (int i=1 ;i < v.size();i++){
        if (v[i] < tiny){
           SS = tiny ;
           tiny = v[i]; 
        }
        else if (v[i]> tiny && v[i] < SS){
            SS = v[i];
        }
    }
    cout << "smallest :" << tiny << endl << "SS : " << SS ;
}

int main (){
    //
    vector <int > v= {1,2,3,4,5,};
    // cout << smallest (v) << endl << SS(v);
    OSS(v);
    return 0 ;

}






