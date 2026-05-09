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
    vector < int > temp ;
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


int main (){

    // 
    return 0 ;
}