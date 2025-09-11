#include<bits/stdc++.h>
using namespace std;

void brute_moveZeroes(int arr[], int n){

    //# step 1: store non zero elements in a temp
    vector<int> temp;
    for(int i = 0; i < n; i++){
        if(arr[i] != 0){
            temp.push_back(arr[i]);
        }
    }

    // print temp
    for (int i = 0; i < temp.size(); i++) {
        cout << "temp: "<< temp[i] << " ";
    }
    cout << endl;

    //# step 2: store non 0 elements in the front of the array
    for(int i = 0; i < temp.size(); i++){
        arr[i] = temp[i];
    }

    //# step 3: fill 0's at the end of the array
    for(int i = temp.size(); i < n; i++){
        arr[i] = 0;
    }
}

int main(){
    int n;
    cout << "enter the length of array: ";
    cin >> n;

    int arr[n];
    cout << "enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    brute_moveZeroes(arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}