//left rotate an array by one place 
#include <iostream> 
#include <vector>
#include <algorithm>
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
    if (v.size() == 0 ){
         return ;
    } 
    vector < int > temp(D);
    //important case if D > v.size() ->loop + D = D
    D = D % v.size() ;

    for (int i = 0 ; i< D ;i++){
        temp [i] = v[i];
    }
    //O(d)
    for (int i = D ;i< v.size ();i++){
        v [i - D] = v[i];
    }
    //O(n-d)    
    for (int i = v.size()-D ; i < v.size();i++ ){
        v[i] = temp[i - (v.size()-D)] ; 
    }
    //O(d)
    //SC = O(D) bcz of temporary array used 
}
void LeftRotate_Array_By_D_Places_Optimal(vector <int> &v , int D ){
    if (v.size() == 0 ){
         return ;
    } 
    D = D % v.size();
     for (int i = 0 ; i < D/2 ; i++){//0 to D-1
        int temp = v[i] ;
        v[i] = v[(D -1) - i] ;
        v[(D-1) - i] = temp ;
     }
     for (int i = 0; i < (v.size()-D)/2 ; i++){// D to n-1 
        int j = i + D; 
        int temp = v[j] ;
        v[j] = v[(v.size() - 1) - i] ;
        v[(v.size()-1 ) - i ] = temp ;
     }
     for (int i = 0 ; i < v.size()/2 ; i++){ // 0 to n-1 
        int temp = v[i] ;
        v[i] = v[(v.size()-1) - i] ; 
        v[(v.size()-1) - i] = temp ;
     }
 }
 void LeftRotate_Array_By_D_Places_SuperStraight(int arr[] , int n , int D ){
    if (n == 0) return ;
    D = D % n ;
    reverse (arr , arr + D) ;
    reverse (arr + D , arr + n);
    reverse (arr , arr + n) ;
 }

// reverse fucntion is build in functions but its code is important 
void Reverse (int arr [] , int n , int start , int end){
    while (start <= end){
        int temp = arr [start];
        arr [ start ]= arr [end ];
        arr [ start ] = temp ;
        start ++ ;
        end -- ;
    }
}
int main (){

    //
    vector <int> v ={1,2,3,4,5,6};
    // LeftRotateB_OnePlace (v );
    // for (auto it : v ){
    //     cout << it << endl ;
    // }
    // LeftRotateB_DPlaces(v ,3);
    // for (auto it : v ){
    //     cout << it << endl ;
    // }
    // LeftRotate_Array_By_D_Places_Optimal (v , 3);
    // for (auto it :v ){
    //     cout << it << "  ";
    // }
    int arr [] ={ 1,2,3,4,5,6,7,8} ;
    LeftRotate_Array_By_D_Places_SuperStraight (arr , sizeof (arr)/sizeof(int) , 3) ;
    for (auto it :arr ) {
        cout << it << "  " ;
    }
    return 0 ;
}