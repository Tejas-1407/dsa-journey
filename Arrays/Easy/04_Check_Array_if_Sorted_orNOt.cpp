//check array if sorted or not 
//-> compliment thinking 

#include <iostream>
#include<vector>
using namespace std ;

void CheckSortedArray_0(vector <int> &v){
    for (int i = 0 ; i < v.size()-1 ; i++){
        if (v[ i ] > v [i+1]){ //Compliment thinking//
            cout << "Not Sorted Array";
            return ;
        }
    }
    cout << "Sorted Array" ;
}
// if want T/F
bool CheckSortedArray_1(vector <int> &v){
    for (int i = 0 ; i < v.size()-1 ; i++){
        if (v[ i ] > v [i+1]){ //Compliment thinking//
            return false;
        }
    }
    return true;
}


int main (){
    //
    vector < int > v ={1,2,3,4,52,} ;
    // CheckSortedArray_0(v );
    cout << CheckSortedArray_1(v );
    return 0 ;

}