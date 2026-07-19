#include <iostream>
#include <vector>
#include <set>
#include <climits>
using namespace std ;

int RD (vector<int > &v){
    int *ptr = &v[0];
    int *stay = &v[0];
    int idx = 1 ;
    for (int i = 1; i < v.size () ;i++){
        if (v[i] != *ptr){
            idx ++ ;
            ptr = &v[i];
            stay ++ ;
            *stay = v[i] ;
        }
    }
    v.resize (idx) ;
    return idx ; 
}


int main (){

    vector <int > A = {1,2 ,2,3,3,3,4,6,5} ;
    cout << RD (A) ;
    cout <<endl ; 
    for (auto it : A){
        cout << it << endl;
    }
    return  0 ;
}