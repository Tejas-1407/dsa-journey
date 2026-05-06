#include <iostream>
#include <vector>
#include <climits>
using namespace std ;

int largest (vector <int> &v){
    int maxi  = v[0];
    for (int i = 1 ;i < v.size() ; i++){
        if (v[i]>maxi ){
            maxi = v[i];
        }
    }
    return maxi ;
}

int SecondL (vector <int> &v){
    int maxi = largest (v) ;
    int SL = INT_MIN ;
    for (int i = 0 ; i< v.size (); i++){
        if (v[i] > SL && v[i] < maxi ){//basically v[i]!= maxi != SL
            SL = v[i]; 
        }
        return SL ;
    }
}

int rough (vector <int> &v){
    
}


//second largest optimal 

int OSL(vector <int> &v){
    int maxi =  v[0] ;
    int SL = INT_MIN ;
    for (int i = 1 ; i < v.size() ; i++){
        if (v[i] > maxi) {
            SL = maxi ;
            maxi = v[i];
        }
        else if (v[i] < maxi && SL < v[i]){
            SL = v[i] ;
        }

    }
    cout  << "maximum :" << maxi << endl<< "SL :" << SL;
       
}



// second smallest 


int smallest (vector <int> &v){
    int tiny = v[0] ;
    for (int i =0 ; i< v.size() ;i++){
        if (v[i] < tiny ){
            tiny = v[i];
        }
    }
    return tiny ;
}

int SS (vector <int > &v){
    int tiny = smallest(v);
    int SS = INT_MAX;
    for (int i= 0 ;i  < v.size() ; i++){
        if (v[i]< SS && v[i]>tiny){//basically v[i]!=tiny != SS
            SS = v[i];
        }
    }
    return SS ;
}

//SS optimal 

int OSS(vector <int> &v){
    int tiny = v[0] ;
    int SS = INT_MAX ;

    for (int i=1 ;i < v.size();i++){
        if (v[i] < tiny){
           SS = tiny ;
           tiny = v[i]; 
        }
        else if (v[i]> tiny && v[i] < SS){
            SS = v[i];
        }
    }
    cout << "smallest :" << tiny << endl << "SS : " << SS ;
}

int main (){
    //
    vector <int > v= {1,2,3,4,5,};
    // cout << largest (v) << endl << SecondL (v);
    // OSL(v);
    // cout << smallest (v) << endl << SS(v);
    OSS(v);
    return 0 ;

}






