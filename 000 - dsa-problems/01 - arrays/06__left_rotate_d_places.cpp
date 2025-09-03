#include<bits/stdc++.h>
using namespace std;

/*

!e.g 1: 
    input - [1, 2, 3, 4, 5]
    k = 2 (move the array to left by 2 place)

    output - [3, 4, 5, 1, 2]

!e.g 1: 
    input - [1, 2, 3, 4, 5]
    k = 4 (move the array to left by 4 place)

    output - [5, 1, 2, 3, 4]

*/

void bruteForce1_left_rotate_d_place(int arr[], int n, int k){

    // store k elements into temp
    vector<int> temp;
    for(int i = 0; i < k; i++){
        temp.push_back(arr[i]);
    }

    // shifting the arr[i] elements to the left
    for(int i = k; i < n; i++){
        arr[i-k] = arr[i];
    }

    // copy the temp elements into main arr
    for(int i = 0; i < k; i++){
        arr[n-k+i] = arr[i];
    }
}

//! Limitation of bruteForce1:
// This approach only works correctly when k ≤ n.
// If k > n, the logic breaks because extra rotations are not reduced modulo n.
// For example: 
//   n = 7, k = 10
//   10 rotations = 7 full rotations (array becomes the same) + 3 extra rotations
//   Expected result after 10 rotations: [4, 5, 6, 7, 1, 2, 3]
//   But bruteForce1 gives an incorrect output since it doesn’t handle k > n.

void bruteForce2(int arr[], int n, int k){

}

void optimal_approach(int arr[], int n, int k){

    reverse(arr, arr+k);
    reverse(arr+k, arr+n);
    reverse(arr, arr+n);

}

int main(){
    int n;
    cout << "enter the length: ";
    cin >> n;

    int k;
    cout << "k: ";
    cin >> k;

    int arr[n];
    cout << "enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // bruteForce1_left_rotate_d_place(arr, n, k);

    optimal_approach(arr, n, k);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}