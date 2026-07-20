#include <iostream>
#include <vector>
#include <set>
#include <climits>
using namespace std ;

void LR (vector <int > & v){
    for (int i = 0 ; i < v.size() -1 ;i++){
        int temp = v[i] ;
        v[i] =  v [i+1] ;
        v[i+1 ] = temp  ;
    }
}

void LRD (vector <int > &v, int D ){
    int n = D% v.size() ;
    for (int i = n -1  ; i < v.size ()-n ;i++ ){
        v[i]
    }
}


int main (){

    vector <int > A = {1,2 ,2,3,3,3,4,6,5} ;
     LR (A) ;
    cout <<endl ; 
    for (auto it : A){
        cout << it << endl;
    }
    return  0 ;
}