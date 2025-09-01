#include<bits/stdc++.h>
using namespace std;

int main(){

    // int arr[5];
    // cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

    // cout << "array at index 2 is: " << arr[2] << endl;


    // 2D array

    int arr[3][5];

    arr[1][3] = 23;
    cout << "value at index[1][3]: " << arr[1][3] << endl;

     cout << "value at index[1][1]: " << arr[1][1] << endl; // this will store some garbage value here

    return 0;
}

// array elements are stored in consective manner
// but we don't know where the first array i.e at the 0th index is stored