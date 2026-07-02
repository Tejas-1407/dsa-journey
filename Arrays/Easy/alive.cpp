#include <bits/stdc++.h>
using namespace std;

int largest (vector <int> & arr ){
    int max = arr[0];
    for (int i = 1 ; i< arr.size() ; i ++){
        if (arr[i] > max ){
            max = arr [i];
        }
    }
    return max ;
}

int second_largest (vector <int > & arr ){
    int max = largest(arr);
    int SL = INT_MAX ;
    for (int i = 0 ; i < arr.size () ;i++){
            if (arr[i] < max && arr[i] > SL){
                SL = arr[i] ;
            }
            else{
                SL = max ;
                max = arr[i] ;
            }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector <int>arr = {1,2,3,4,5,6,7};
    cout << second_largest( arr) ;

    return 0;
}