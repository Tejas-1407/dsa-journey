#include<iostream>
#include<vector>
#include<set>
#include<climits>

using namespace std ;
//largest 
int largest (vector <int> &v ){
    int maxi  =v[0] ;
    for (int i = 1 ; i < v.size() ; i++){
        if (v[i] > maxi ) {
            maxi = v[i] ;
        }
    }
    return maxi ;
} 

int smallest (vector <int> &v ){
    int mini  =v[0] ;
    for (int i = 1 ; i < v.size() ; i++){
        if (v[i] < mini ) {
            mini = v[i] ;
        }
    }
    return mini ;
} 

//second largest 
int Second_Largest(vector <int> &v){
    int maxi= largest(v); 
    int SL = INT_MIN;
    for (int i = 0 ; i < v.size() ; i++){
        if (SL < v[i] && v[i]< maxi){
            SL = v[i];
        }
    }
    return SL;
}
 
int OSL(vector <int> &v){ 
    int maxi = v[0];
    int SL = INT_MIN;
    for (int i = 1 ; i<v.size() ;i++){
        if (v[i] >  maxi ){
            SL = maxi ; 
            maxi = v[i]; 
        }
        else if (v[i] < maxi && SL > v[i]){
            SL = v[i];
        }
    }
    return SL ;
}

int OSS(vector <int> &v){
    int mini = v[0];
    int SS = INT_MAX ;
    for (int i = 1 ; i < v.size(); i++){
        if (v[i] < mini){
            SS  = mini ;
            mini = v[i] ; 
        }
        else if (v[i] > mini && v[i]< SS){
            SS = v[i];
        }
    }
    return SS ;
}

void check_Array_sorted(vector <int > &v){
    for (int i = 0 ; i < v.size(); i++){
        if (v[i] > v[i+1] ){
            cout << "not sorted" ;
            return ;
        }
    }
    cout << "sorted" ;
    return ;
}

int remove_duplicate(vector <int> &v){
    set <int> st ;
    for (int i = 0 ; i < v.size() ; i++) {
        st.insert(v[i]) ;
    }
    int idx = 0 ; 
    for (auto it : st) {
        v[idx] = it ;
        idx ++ ;
    }
    v.resize(idx) ;
    return idx;
}

int remove_duplicate_0 (vector <int> &v){
    // int *ptr = &v[0]; 
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

int remove_dupli_optimal(vector <int> &v){
    int i = 0 ;
    for (int j  = 1 ; j< v.size () ; j++){
        if (v[i] != v[j]){
            i++; 
            v[i] = v[j] ; 
        }
    }
    v.resize(i+1) ;
    return i+1 ;
}

void LeftRotateByOne(vector <int > &v){
    int temp = v[0];
    for (int i =  1 ; i < v.size(); i++){
        v[i - 1] = v[i];
    }
    v[v.size()-1] = temp ; 
    return ;
}

void LRBD(vector <int > &v, int D){
    vector <int> temp(D);
    D = D % v.size () ;

    for (int i = 0 ; i < D ; i++){//0 to D-1
        temp [i ] = v[i] ;
    }
    for (int i = D ; i < v.size() ; i++){ //D to n
        v[i - D] = v[i] ;
    }
    for (int i = v.size()-D  ; i < v.size() ; i++) {
        v[i] = temp [ i - (v.size() - D) ] ;
    }
}

int main (){
    //
    vector < int > v ={1,2,2,3,4,4,5,5};
    cout << remove_duplicate_0 (v);
    for (auto it : v){
        cout << it << endl ;
    }
    return 0 ;
}