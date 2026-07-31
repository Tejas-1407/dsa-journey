#include <iostream>
#include <vector>
#include <set>
#include <climits>
using namespace std ;

void LR(vector <int > &v , int D){
    int n = D % v.size ();
    if (v.size() == 0 ) return ;
    vector <int> temp ;
    for (int i = 0 ; i < n ; i++){
        temp.push_back(v[i]) ;
    }
    for (int i = n ; i < v.size() ; i++){
        v[i-n] = v[i] ;
    }
    for (int i = v.size() - n ;i < v.size() ; i++){
        v[i] = temp [i - (v.size()- n)] ;
    }
}
int main (){

    vector <int>v ={ 1,2,3,3,4,4,5,5,6,7,7,7};
    LR (v , 3) ;
    for (auto it : v ){
        cout << it << endl ;
    }
    return  0 ;
}