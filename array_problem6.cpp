//left rotate an array by one place 
#include <iostream> 
#include <vector>
using namespace std ;

void LeftRotateB_OnePlace(vector <int> & v ){
    int temp = v[0];
    for (int i = 1 ;i< v.size ();i++){
        v [i - 1] = v[i];
    }
    v[v.size()-1] = temp ; 
} // TC = O(n)  and SC = O(1) since no extra spaced is being used 
//but for the algorithm the C is O(n) by array
 
void LeftRotateB_DPlaces(vector <int> & v , int D){
    vector < int > temp(D);
    //important case if D > v.size() ->loop + D = D
    D = D % v.size() ;

    for (int i = 0 ; i< D ;i++){
        temp [i] = v[i];
    }
    for (int i = D ;i< v.size ();i++){
        v [i - D] = v[i];
    }
    for (int i = v.size()-D ; i < v.size();i++ ){
        v[i] = temp[i - (v.size()-D)] ; 
    }
}


int main (){

    //
    vector <int> v ={1,2,3,4,5,6};
    // LeftRotateB_OnePlace (v );
    // for (auto it : v ){
    //     cout << it << endl ;
    // }
    LeftRotateB_DPlaces(v ,3);
    for (auto it : v ){
        cout << it << endl ;
    }
    return 0 ;
}