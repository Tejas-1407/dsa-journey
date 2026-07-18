// 2nd largest number

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// O(n) - Two Pass approach
int largest(vector<int> &v) {
    if (v.empty()) return -1;
    int maxi = v[0];
    for (size_t i = 1; i < v.size(); i++) {
        if (maxi < v[i]) {
            maxi = v[i];
        }
    }
    return maxi;
}

// O(n)

int secondL(vector < int> &v){
    int SL = INT_MIN ;
    int maxi = largest (v );
    for (int i=0 ; i < v.size();i++){
        if (v[i] > SL && v[i] < maxi){// actually we want v[i]!= max but writing < is a good practice
            SL = v[i];
        }
    }
    return SL;
}

//SL optimal 


int OSL (vector <int > &v){//in this method we find the both max and SL together
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
    return SL;
}

int main() {
    vector<int> v = {1, 1, 1, 1, 1, 1, 4, 5, 8, 6};
    
    cout << "Using secondL (Two-pass): " << secondL(v) << endl;
    cout << "Using OSL (Single-pass): " << OSL(v) << endl;

    return 0;
}

  





