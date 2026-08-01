#include <iostream>
#include <vector>
#include <set>
#include <climits>
#include <algorithm>
using namespace std ;

void fun1 (vector <int> &v){// move zeros optimal
    int j = -1 ;
    for (int i= 0 ; i < v.size() ;i++){
        if (v[i]==0){
            j = i ;
            break ;
        }
    }
    if (j == -1 ) return ;
    for (int i = j ; i < v.size() ; i++){
        if(v[i] != 0 ){
            swap (v[j] ,  v[i] ); 
            j++ ;
        }
    }
}

vector <int> fun2 (vector < int > &v) {//different approach remove zeros direct return vector type function
    vector <int> temp ;
    for (int i = 0  ; i < v.size() ; i++){
        if (v[i]!=0){
            temp.push_back(v[i]);
        }
    }
    return temp  ;
}
void fun3(vector <int> &v){ // brute force
    vector <int> temp ;
    for (int i = 0 ; i < v.size() ;i++){
        if (v[i]!=0){
            temp .push_back(v[i]);
        }
    }
    for (int i = 0 ; i < temp.size() ;i++){
        v[i] = temp [i] ;
    }
    for (int i = temp.size() ; i < v.size() ;i++){
        v[i] = 0 ;
    }
}

void fun4 (vector <int > &v) {
    //bubble sort 
    bool swapped ;
    for (int i = 0; i < v.size() - 1 ;i++){
        swapped = false  ;
        for (int j = 0 ; j < v.size () - 1  - i  ; j++ ){
            if (v[j] >  v[j+1]){
                swap (v[j] , v[j+1]);
                swapped  = true ;
            }
        }
        if (!swapped){ return ;} 
    }   
}

void fun5(vector <int > &v) { // [sorted | unsorted]
    //selection sort ;
    for (int i = 0 ; i < v.size()-1 ;i++){
        //concept 
        int smallest = i ; //each round of i ;
        for (int j = i + 1 ; j < v.size() ;j++){
            if (v[j] < v[smallest ] ){
                smallest = j ;
            }
        }
        swap (v[smallest] , v[ i]) ;
    }
}

void fun6(vector < int > & v){
    //insertion sort , card method , current & previous concept 
    for (int i = 1 ; i < v.size ()  ; i++){
        int curr = v[i] ;  //curr 
        int j = i - 1 ; //prev 
        while ( j >= 0 && v[j] > curr ){
            v[j + 1] = v[j]; 
            j-- ;
        }
        v[ j+1 ] = curr ;
    }
}

int main (){

   //code
   vector <int> v = {1,2,0,4,0,3,0,6,0,6,7} ; 
   fun6 (v) ;
   for (auto it : v){   
    cout << it << endl ;
   }
    return  0 ;
}