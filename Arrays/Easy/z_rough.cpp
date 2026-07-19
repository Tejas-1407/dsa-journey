#include <iostream>
#include <vector>
#include <set>
#include <climits>
using namespace std ;

int ORD (vector <int > &v){
    int i = 0 ; 
    for (int j = 0 ; j < v.size() ;j++){
        if (v[i] != v[j]){
            i++ ;
            v[i] = v[j] ;
        }
    }
    v.resize(i+1);
    return i+1 ;
}

int main (){

    vector <int > A = {1,2 ,2,3,3,3,4,5} ;
    cout << ORD (A) <<endl ; 
    for (auto it : A){
        cout << it << endl;
    }
    return  0 ;
}