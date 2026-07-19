#include <iostream>
#include <vector>
#include <set>
#include <climits>
using namespace std ;

int SL (vector < int > & v) {
    int l = v[0];
    int sl = INT_MIN ;
    for(int i =0 ; i < v.size() ;i++){ 
        if (v[i]> l ){
            sl = l ; 
            l = v[i];
        }
        else if (v[i] < l && v[i] > sl){
            sl = v[i] ;
        }
    }
    cout << l << endl;
    return sl ;
}


int main (){

    vector <int > A = {1,2 ,2,3,3,3,4,6,5} ;
    cout << SL (A) ;
    cout <<endl ; 
    for (auto it : A){
        cout << it << endl;
    }
    return  0 ;
}