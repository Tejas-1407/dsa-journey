#include <iostream>
#include <vector>
using namespace std ;
//given increasing number array so v[n-1] > v[0]

vector <int> twosum (vector <int> &v , int target){
    int i = 0 ; 
    int j = v.size() - 1 ;
    while ( i < j ){
        int sum = v[i] + v[j] ;
        if (sum == target ){
            return {i+1 , j+1}; 
        }
        else if (sum > target){
            j-- ;
        }
        else {
            i++ ;
        }
    }
    return {} ;
}

int main () {

    //code 
    vector <int> v = {2,7,11,15} ;
    vector <int> solution = twosum(v , 9) ;

    for (auto it  : solution){
        cout << it << endl ;
    }

    return 0 ;
}


// Mistakes:
// - Wrong while condition (>= instead of <)
// - Forgot return {}
// - Extra brace on LeetCode