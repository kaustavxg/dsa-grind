#include<bits/stdc++.h>
using namespace std;

/*
input - [1, 2, 3, 4, 5]
output - [2, 3, 4, 5, 1]
*/


void left_rotate(int arr[], int n){

    int temp = arr[0];
    for(int i = 1; i < n; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
}


int main(){
    int n;
    cout << "enter the length: ";
    cin >> n;

    int arr[n];
    cout << "enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    left_rotate(arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}