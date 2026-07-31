//move all the zeros to the end of the array 
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std ;

// void Move_Zeros_To_End (int arr []  ,int n ){
//     int *ptr = arr ;
//     int  *stay = arr ;
//     for (int i = 0 ; i < n ; i ++){
//         if (*ptr == 0){
//             stay = ptr ;
//             int *temp = ptr ;
//             while(*temp == 0){
//                 temp ++;
//             }
//             *stay = *temp;
//             ptr++ ;
//         }
//         else {
//             ptr ++ ;
//         }
//     }
// }....................wrong too much 

void Move_Zeros_To_End(vector <int> &v){
    vector <int> temp ; 
    for (int i = 0 ; i < v.size() ; i++) {
        if(v[i]!=0) {
            temp.push_back(v[i]) ;
        }
    }
    for (int i = 0 ; i < temp.size() ; i++){
        v[i] = temp [i] ; 
    }
    for (int i = temp.size () ; i<v.size() ; i++){
        v[i] = 0;
    }
}
//this is the complete optimal solution 
void Move_Zeros_To_End_optimal_0(vector <int > &v) {
    int j = -1 ;
    for (int i = 0 ; i < v.size() ; i++){
        if (v[i] == 0){
            j =i ; 
            break;
        }
    }

    if (j == -1 ) return ; //no zeros in an array

    for (int i = j+1 ; i < v.size() ; i++){
        if (v[i] != 0 ){
            swap (v[i]  , v[j]);
            j++ ; 
        }
    }
}

void Move_Zeros_To_End_optimal_1 (vector <int > &v){// only if its known v[0] = 0
    int j= 0 ;
    for (int i= 0  ;i <v.size(); i++){
        if (v[i] != 0){
            swap (v[i] , v[j]) ;
            j++ ;
        }
    }
}

int main (){

    //
    vector <int > v = {1,2,0,0,9,8,0,4,0};
    Move_Zeros_To_End(v);
    for (auto it : v){
        cout << it << endl ; 
    }
    return 0 ;
}
