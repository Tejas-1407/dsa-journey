// //2nd largest number
// // O(2n)

// #include <iostream>
// #include <vector>
// #include <climits>
// using namespace std ;

// int largest (vector <int> &v ){
//     int maxi = v[0];
//     for (int i = 0 ; i < v.size() ;i++){
//         if (maxi < v[ i ]){
//             maxi = v[i];
//         }
//     }
//     return maxi;
// }

// // O(n)

// int secondL(vector < int> &v){
//     int SL = INT_MIN ;
//     int maxi = largest (v );
//     for (int i=0 ; i < v.size();i++){
//         if (v[i] > SL && v[i] < maxi){
//             SL = v[i];
//         }
//     } 
//     return SL ;
// }

// //O(n)

// int main (){
//     //code
//     vector <int> v ={1,1,1,1,1,1,4,5,8,6};
//     cout << secondL (v) ;

//     return 0 ;
// }


//optimal 

#include <iostream>
#include <vector>
#include <climits>
using namespace std;
 
int main (){
    //
    vector < int > v = {9,1,8,2,7} ;
    int maxi = v[0] , SL = INT_MIN; 
    for (int i=1  ;i < v.size() ; i++){
        if (maxi < v[i] ){
            SL = maxi ;
            maxi = v[i] ;
        }
        else if (maxi > v[i] && SL < v [i]){
            SL = v[i] ;
        }
    }
    cout << SL ;
    return 0 ;
}



