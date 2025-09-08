#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int key){

    for(int i = 1; i <= n; i++){
        if(arr[i] == key){
            return i;
        } 
    }
    return -1;
}

int main(){
    int n;
    cout << "enter the length of array: ";
    cin >> n;

    int arr[n];
    cout << "enter elements: ";
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    int key;
    cout << "key: ";
    cin >> key;

    int index = linearSearch(arr, n, key);

    if(index != -1){
        cout << "key is found at index: " << index << endl;
    } else {
        cout << "key is not found: " << endl;
    }
}  