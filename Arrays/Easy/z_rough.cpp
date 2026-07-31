#include <iostream>
#include <vector>
#include <set>
#include <climits>
#include <algorithm>
using namespace std ;

void RZ(vector < int >&v){
    int j = -1 ; 
    for (int i= 0 ; i < v.size(); i++){
        if (v[i ] == 0 ){
            j = i ;
            break ;
        }
    }
    if (j == -1 ) return ;
    for (int i = j + 1 ; i < v.size() ;i++){
        if (v[i] != 0 ){
            swap(v[i] , v[j]) ;
            j++ ;
        }
    }
}

int main (){

   //code
   vector <int> v = {1,2,0,4,0,3,0,6,0,6,7} ; 
   RZ (v) ;
   for (auto it : v){   
    cout << it << endl ;
   }
    return  0 ;
}