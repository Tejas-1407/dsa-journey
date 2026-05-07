//remove duplicate from a sorted array 
//set stores everthing in unique ascending order 
//use of for each loop 
//set insert  : o(logn) 
//brute and optimal -> 2 point approach 



#include<iostream>
#include<vector>
#include<set>

using namespace std ;

int RemoveDupli(vector < int > &v){
    set <int > st ;
    for (int i= 0 ;i< v.size(); i++){
        st.insert(v[i]); 
    }//nlogn
    
    int idx  = 0 ;
    for (auto it : st){
        v[idx] = it ;
        idx ++ ;
    }//O(n)
    v.resize(idx);//important to remove garbage 
    return idx  ;
}

//overall TC =sum , SC = O(n)

//NOW two pointer approach -> my try first 

// int RD(vector <int > &v){
//     int * ptr = & v[0] ;
//     int * stay = &v[0];
//     int idx = 0 ;
//     stay ++;
//     for (int i = 1 ;i <v.size();i++){
//         if (* ptr == v[i]){
//             ptr++;
//         }
//         else {
//             *stay = v[i] ;
//             stay ++ ;
//             idx++;
//         }
//     }
//     v.resize(idx);
// } ...........................................wrong output 


//correct one improved 

int RDI(vector <int > &v){
    int *stay = &v[0];
    int *ptr = &v[0];
    int idx = 1 ;
    for (int i= 1 ;i < v.size() ;i ++){
        if (*ptr != v[i] ){//remember " not equal to "what we want .so use complimentay 
            stay ++ ;
            *stay = v[i];
            ptr = &v[i] ;
            idx ++;
            }
    }
    v.resize(idx) ;
    return idx ;
}//..............this one wrok correct but not optimal 

//optimal solution ORD

int ORD (vector <int > &v){
    int i = 0 ;
    for (int j = 1 ; j < v.size () ;j++){
            if (v[j]!=v[i]){
                i++ ;
                v[i] = v[j];
            }
    }
    v.resize(i+1) ;
    return i+1 ;
}


int main (){
    //
    vector < int > v = {1,1,2,3,4,4,5} ;
    ORD(v);
    for (auto it : v){
        cout << it << endl ;
    }
    return 0 ;
}