//union of sorted arrays arrays

#include <bits/stdc++.h>

using namespace std  ;

vector < int > Union_sortedArray(vector <int> a , vector <int> b ){
    int n1 = a.size() ;
    int n2 = b.size() ;
    set <int> st ;//n is the size of the set not expactly know 
    for (int i = 0 ; i < n1 ; i++){
        st.insert (a[i]) ;
    }//o(n1logn)
    for (int i = 0  ; i < n2 ;i++){
        st.insert (b[i]) ;//O(n2longn)
    }
    vector <int> unionArray(st.size());
    for (auto it : st) {
        unionArray.push_back(it) ;
    }//O(n1+n2) worst case 
    return unionArray ;
}//sc = O(n1+n2) set size worst case + O(n1+n2) to return the answer not using it in algo just dfor return 

//optimal 
//two pointer appraoch , idea use the advantage of sorted thing

vector <int > Union_optimal (vector <int > v1 , vector <int> v2) {
    int i = 0 ; 
    int j = 0 ;
    vector <int > Union;
    while (i < v1.size() && j < v2.size()){
            // if(Union.back() == v1[i]){
            //     continue ;
            // }
            // else {
            //     Union.push_back(v1[i]);
            // i++ ;
            // }

            // compliment thinking 
            if (v1[i] <= v2[j]) {
                if (Union.size()==0 || Union.back() != v1[i]) {
                    Union.push_back(v1[i]) ;
                }
                i++ ; // inrrespective of u take it or not take it
            }
            else {
                if (Union.size()== 0 || Union.back() != v2[j]) {
                    Union.push_back(v2[j]) ;
                }
                j++ ; // inrrespective of u take it or not take it
            }

        }
    //mistke again :
    //  while (i < v1.size()){
    //     Union.push_back(v1[i]);
    // }
    
    // while (i < v2.size()){
    //     Union.push_back(v2[i]);
    // }
    while (i < v1.size()){
                if (Union.size()==0  || Union.back() != v1[i] ) {
                    Union.push_back(v1[i]) ;
                }
                i++ ; // inrrespective of u take it or not take it
    }
    while (j < v2.size()){
                if (Union.size()==0  || Union.back() != v2[j] ) {
                    Union.push_back(v2[j]) ;
                }
                j++ ; // inrrespective of u take it or not take it
    }

    return Union ;
    //TC == O(n1+n2) sc= O(n1+n2)worst case not for using or solving but for returning the answer
}

int main (){

    vector <int > v1 ={1,2,2,2,3,4,5,6,};
    vector <int > v2 = {1,2,3,4,5,} ;
    // vector <int > v = Union_sortedArray(v1,  v2) ;
    vector <int > v = Union_optimal(v1,  v2) ;
    for (int i = 0 ; i < v.size() ; i++){
        cout << v[i]  << endl ;
    }

    return 0;
}