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

Node * BuildTree (vector <int> &v ) {
    index ++ ;

    if (v[index] == -1 ){
        return NULL ;
    }
    Node * root = new Node (v[index]) ;

    root -> left  = BuildTree (v) ;
    root -> right = BuildTree (v) ;

    return root ;
}


void preorder (Node * root){

    if (root == NULL) {
        return  ;
    }
    
    cout  << root -> data  << " -> " ;
    preorder (root->left) ;
    preorder (root->right) ;

}
void inorder (Node * root){

    if (root == NULL) {
        return  ;
    }
    
    inorder (root->left) ;
    cout  << root -> data  << " -> " ;
    inorder (root->right) ;

}
void postorder (Node * root){

    if (root == NULL) {
        return  ;
    }
    
    postorder (root->right) ;
    postorder (root->left) ;
    cout  << root -> data  << " -> " ;

}

int main() {
    
    // code 
    vector <int> v = {1,2,-1,-1,3,4,-1,-1,5,-1,-1} ;
    Node * root = BuildTree (v) ;
    cout << root ->left -> data << endl ;
    inorder (root) ;
    return 0;
}