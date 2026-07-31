//right rotation by D places Assignment

#include <iostream>
#include <vector>
#include <set>
#include <climits>
#include <algorithm>
using namespace std ;


void RR(vector<int> &v, int D) {
    if (v.size() == 0) return;
    D = D % v.size();
    reverse(v.begin() + v.size() - D, v.end());   // Step 1: reverse last D elements
    reverse(v.begin(), v.begin() + v.size() - D); // Step 2: reverse first n-D elements
    reverse(v.begin(), v.end());                  // Step 3: reverse whole vector
}


int main (){

    vector <int > v  = { 1,2,3,3,4,4,5,5,6,7,7,7};
    RR(v , 3) ;
    for (auto it : v){
        cout << it << endl ;
    }
    return  0 ;
}