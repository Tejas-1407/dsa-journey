//linear search first occurance

#include <iostream>
#include <vector>

using namespace std ;

int linear_Search(vector <int> &arr , int target) {
    for (int i = 0 ; i < arr.size() ; i++){
        if (arr[i] == target){

            return i ;
        }
        return -1 ;
    }
}
int main (){
    
    vector <int > v {} ;

    return 0 ;
}