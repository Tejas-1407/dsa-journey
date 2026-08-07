#include <iostream>
#include <vector>
#include <set>
#include <climits>
#include <algorithm>
using namespace std ;

vector <int> twosum (vector <int> &v , int target ){
    int left = 0 ; 
    int right = v.size () - 1 ;
    while (left < right) {
        int sum = v[left] + v[right] ;
        if (sum == target ) {
            return {left + 1 , right +1 } ;
        }
        else if (sum > target ){
            right -- ;
        }
        else {
            left ++ ;
        }
    }
    return {} ;
}


int main(){
    //code 
    return 0 ;
}