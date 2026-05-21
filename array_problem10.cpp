//union of sorted arrays arrays

#include <bits/stdc++.h>

using namespace std  ;

vector < int > Union_sortedArray(vector <int> a , vector <int> b ){
    int n1 = a.size() ;
    int n2 = b.size() ;
    set <int> st ;
    for (int i = 0 ; i < n1 ; i++){
        st.insert (a[i]) ;
    }
    for (int i = 0  ; i < n2 ;i++){
        st.insert (b[i]) ;
    }
    vector <int> unionArray;
    for (auto it : st) {
        unionArray.push_back(it) ;
    }
    return unionArray ;
}
int main (){

    vector <int > v1 ={1,2,3,4,5,6,};
    vector <int > v2 = {1,2,3,4,5,6,7,8,9,} ;
    
    return 0;
}