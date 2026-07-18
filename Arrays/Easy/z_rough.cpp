#include <iostream>
#include <vector>
#include <set>
#include <climits>
using namespace std ;

int RD (vector <int > &v){
    set <int> s ;
    for (int i = 0 ;i < v.size (); i++){
        s.insert (v[i]) ;
    }
    int idx = 0 ;
    for (auto it : s){
        v[idx] = it ;
        idx++ ;
    }
    v.resize(idx);
    return idx ;
}


int main (){

    vector <int > A = {1,2 ,2,3,3,3,4,5} ;
    cout << RD (A) <<endl ; 
    for (auto it : A){
        cout << it << endl;
    }
    return  0 ;
}