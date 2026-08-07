// largest element in an array//




// #include <iostream>
// using namespace std;

// int main() {
//     int arr [5] = {10, 20, 5, 30, 15};
//     int maxi = arr[0];
//     for (int i =0 ; i< 5 ;i++){
//         if (maxi <= arr[i]){
//             maxi = arr[i];
//         }
//     }
//     cout << "largest element in the array is: " << maxi <<endl ;
//     return 0;
// }

#include <iostream>
#include <vector>

using namespace std ;

int largestelement(vector <int >&arr){
    int maxi = arr [0];
    for (int i = 0 ; i < arr.size() ; i++){
        if (arr[i] > maxi ){
            maxi = arr[ i ];
        }
    }
    return maxi;
}

int main(){
vector <int> arr = {1,2,3,6,7,3,8};
cout << largestelement(arr) ;
    return  0;
}
//NOTE:  use .size(arr) for vector not sizeof (arr)
