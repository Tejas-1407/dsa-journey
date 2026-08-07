#include <bits/stdc++.h>
using namespace std;

class Solution {
public: 
    int removeElement(vector<int>& v, int val) {
        //concept based on move zeros to the end and remove duplicate questions but here array is not sorted .
        int j = -1  ;
        for (int i = 0 ; i < v.size() ; i++){
            if (v[i] == val){
                j = i ;
                break ;
            }
        }
        if (j == -1 ){return v.size() ;}

        // int index = 0 ;
        // for (int i = j + 1 ; i < v.size() ; i++){
        //     if (v[i] != val){
        //         swap (v[i] , v [j]) ; 
        //         j++ ;
        //         index ++ ;
        //     }
        // }
        // return v.size() - index ;  
        //note : index counts how many GOOD elements were moved, NOT how many BAD elements were removed.
        //At the end of my algorithm, j equals the number of elements that are NOT val 
        // so for what u were losing ur thick head was already there u angry bastered just like eris greyrat .

        for (int i = j + 1 ; i < v.size() ; i++){
            if (v[i] != val){
                swap (v[i] , v [j]) ; 
                j++  ;
            }
        }
        return j ;  


    }
};


int main (){

    //code 
    vector <int> v = {0,1,2,2,3,0,4,2} ;
    Solution s1 ;
    cout << s1.removeElement (v,2) << endl;
    for (auto it : v ){
        cout << it << endl ;
    }
    return 0 ;
}