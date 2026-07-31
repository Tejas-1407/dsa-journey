#include <bits/stdc++.h>
using namespace std;

void bubble_sort(vector <int> &v){
    for (int i = 0 ; i < v.size() -1 ; i++){
        bool swapped ; //reset flag 
        swapped = false ;
        for (int j = 0 ; j < v.size() - 1 - i; j++){
            if (v[j] > v[j+1]){ // j not i remember silly mistake
                int temp = v[j] ;//or just use swap (v[j] ,  v[j+1])
                v[j] = v[j+1] ;
                v[j+1] = temp ;
                swapped = true  ;
            }
        }
        if (swapped == false) return ; // if (!swapped) which is true then return  
    }
}

// selection sort [__sorted__ |__unsorted__ ]
void selection_sort (vector <int > &v){
    for (int i = 0 ; i < v.size() - 1 ;i++){
        int smallest = i ; 
        for (int j = i + 1 ; j < v.size () ; j++){
            if (v [j] < v[smallest]){
                smallest = j  ;
            }
        }
        swap (v[i] ,  v[smallest]) ;
    }
}


void insertion_sort(vector <int> &v) {
    if (v.size() == 0) return ;
    for(int i = 1 ; i < v.size() ;i++){
        int curr = v[i] ;
        int prev = i - 1  ;
        while ( prev >= 0 && v[prev] > curr){
            v[prev + 1] = v [prev] ;
            prev -- ;
        } 
        v[prev + 1] = curr ; // prev + 1 bcz of earlier prev -- 
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector <int> v = {1,2,4,5,7,9,0,6};
    insertion_sort(v) ;
    for (auto it : v){
        cout << it << endl ;
    }
    return 0;
}