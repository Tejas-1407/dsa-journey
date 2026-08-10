#include <bits/stdc++.h>
using namespace std;


class Node {
    public :
    int data ;
    Node * left  ;
    Node * right ;

    Node (int data ){
        this -> data  = data ;
        left = right = NULL ;
    }

}; 

static int index = -1 ;

Node * BuildTree (vector <int> &preorder ) {
    index ++ ;

    if (preorder[index] == -1 ){
        return NULL ;
    }
    Node * root = new Node (preorder[index]) ;

    root -> left  = BuildTree (preorder) ;
    root -> right = BuildTree (preorder) ;

    return root ;
}

int main() {
    
    // code 
    vector <int> v = {1,2,-1,-1,3,4,-1,-1,5,-1,-1} ;
    Node * root = BuildTree (v) ;
    cout << root ->left -> data << endl ;
    return 0;
}