#include <iostream>
#include <vector>
#include <set>
#include <climits>
using namespace std ;

bool CS (vector <int > &v){
    for (int i = 0 ; i < v.size() -1 ;i++){
        if (v[i] > v[i+1]){
            return false;
        }
    }
    return true;
}

int main (){

    vector <int > A = {1,2 ,2,3,3,3,4,6,5} ;
    cout << CS (A) ;
    cout <<endl ; 
    for (auto it : A){
        cout << it << endl;
    }
    return  0 ;
}