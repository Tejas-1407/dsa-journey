#include <iostream>
#include <vector>
#include <set>
#include <climits>

using namespace std ;

//largest 
int largest (vector < int >&v ){
    int maxi = v[0]; 
    for (int i = 1  ;i < v.size() ; i++){
        if (v[i] > maxi ){
            maxi = v[ i ];
        }
    }
    return maxi ;
}

int Second_Largest(vector < int> &v ){
    int maxi = largest (v) ;
    int SL = INT_MIN ;
    for (int i = 0 ; i< v.size () ;i++){
        if (v[i]> SL && v[i] < maxi){
            SL = v[i];
        }
    }
    return SL ;
}
 
int OSecond_Largest(vector < int > &v){
    int maxi = v[0];
    int SL = INT_MIN ;
    for (int i = 0 ; i<v.size() ;i++){
        if (maxi < v[i]){
            SL = maxi ;
            maxi = v[i];
        }
        else if (v[i] < maxi && SL < v[i]){
            SL = v[i] ;
        }
    }
    return SL ;
}

//Smallest 
int smallest (vector <int> &v){
    int min = v[0];
    for (int i= 0 ; i< v.size() ;i++){
        if (v[i]<min ){
            min  = v[i];
        }
    }
    return min;
}
int second_smallest(vector <int > &v){
    int min = smallest (v);
    int SS = INT_MAX ;
    for (int i = 0 ;i < v.size() ;i++){
        if (v[i] < SS && v[i] > min) {
            SS = v[i];
        }
    }
    return SS ;
}

int OSecond_smallest (vector <int > &v){
    int min = v[0];
    int SS = INT_MAX ;
    for (int i= 0; i< v.size(); i++){
        if (v[i]<min){
            SS = min  ;
            min = v[i] ;
        }
        else if (v[i] > min && SS < v[i]){
            SS = v[i] ;
        }
    }
    return SS ;
}

void Check_Array_Sorted_OR_NOT(vector < int > &v ){
    for (int i = 0 ; i < v.size () -1 ; i++){ //imporant range 
        if (v[i] > v[ i+1 ] ) {
            cout << "NOT SORTED" ;
            return ;
        }
    }
    cout << "SORTED" ;
    return ;
}

int Remove_Dupli_Sorted_Array (vector <int> &v) {
    set < int > st ;
    for (int i = 0 ; i < v.size () ;i++){
        st.insert(v[i]);
    }
    int index = 0 ;
    for (auto it : st){
        v[index] = it ;
        index  ++ ;
    }
    v.resize(index);
    return index ;
}

int Remove_Duplicate_First_try(vector <int> &v){
    int *ptr = &v[0];
    int *stay = &v[0];
    int index = 1 ;
    for (int i = 0 ; i < v.size() ; i++ ){
        if (*ptr != v[i]){
            stay ++ ;
            *stay = v[i];
            ptr = & v[i] ;
            index ++ ;
        }
    }
    v.resize (index);
    return index ;
}

// no need of ptr 

int Remove_Duplicate_Second_try(vector <int> &v){
    // int *ptr = &v[0]; //no need 
    int *stay = &v[0];
    int index = 1;
    for (int i = 1 ; i < v.size() ;i++){
        if (*stay != v[i]){
            stay ++;
            *stay = v[i];
            index ++;
        }
    }
    v.resize(index);
    return index ;
}


int Optimal_Remove_Duplicate (vector <int> &v) {
    int i = 0 ;
    for (int j = 1 ; j < v.size() ; j++){
        if (v[i] != v[j]) {
            i++ ;
            v[i] = v[j];
        }
    }
    v.resize(i+1) ; 
    return (i + 1);
}


void Left_Rotate_Array_By_One(vector <int> &v){
    int temp = v[0];
    for (int i = 1 ; i < v.size() ; i++){
        v[i-1] = v[i] ;
    }
    v[v.size()-1] = temp; ;
    return ;
}

void Left_Rotate_Array_By_D(vector <int> &v, int D){
    vector < int > temp (D); // important to size the vector first to D other wise error 
    D = D % v.size() ;//this is one of those hidden mistakes ;
    for (int i = 0 ; i < D ;i++){
        temp[i] = v[i];
    }
    for(int i = D ; i < v.size () ;i++){
        v[i - D] = v [i] ;
    }
    for (int i = v.size() - D ; i < v.size() ;i++){
        v [i] = temp [i - (v.size() - D)] ;
    }
}

int Linear_search(vector <int > &v , int target){
    for (int i = 0 ; i< v.size () ; i++ ){
        if (v[i]== target ){
            return i ;
        }
    }
    return -1 ;
}

void move_zeros_to_end_optimalvoid (vector < int >&v){
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


vector <int> fun2 (vector < int > &v) {//different approach remove zeros direct return vector type function
    vector <int> temp ;
    for (int i = 0  ; i < v.size() ; i++){
        if (v[i]!=0){
            temp.push_back(v[i]);
        }
    }
    return temp  ;
}

void fun3(vector <int> &v){ // brute force move zeros to end
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

    // 
    vector <int> v = {1,2,2,3,3,4,4,5,5,} ;
    // Left_Rotate_Array_By_D(v , 3) ;
    // for (auto it : v ){
    //     cout << it << "  ";
    // }
    cout << Remove_Duplicate_First_try(v) ;
    return 0 ;
} 