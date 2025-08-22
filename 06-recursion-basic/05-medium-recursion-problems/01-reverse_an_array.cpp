#include<bits/stdc++.h>
using namespace std;

void reverse1(int arr[], int l, int r){

    if(l >= r){
        return;
    }

    swap(arr[l], arr[r]);
    reverse1(arr, l+1, r-1);
}

void reverseWithOneVar(int i, int arr[], int n){
    if(i >= (n/2)){
        return;
    }

    swap(arr[i], arr[n-i-1]);
    reverseWithOneVar(i+1, arr, n);
}


int main(){

    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};

    // reverse1(arr, 0, n-1);
    // reverse1(arr, 0, n-1);

    reverseWithOneVar(0, arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << endl;
    }

    return 0;

}