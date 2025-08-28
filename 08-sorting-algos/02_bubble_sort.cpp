#include <bits/stdc++.h>
using namespace std;


void bubble_sort(int arr[], int n){

    for(int i = n-1; i >= 0; i--){
        // int count = 0;
        for(int j = 0; j <= i-1; j++){

            if(arr[j] > arr[j+1]){

                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }   
        }   
    }
}

void optimized_bubble_sort(int arr[], int n){
    for(int i = n-1; i >= 0; i--){
        int didSwap = 0;
        for(int j = 0; j <= i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                didSwap = 1;
            }
        }
        if(didSwap == 0){
            cout << "array is already sorted" << endl;
            break;
        }

        cout << "runningggg" << endl;
    }
}

int main(){
    int n;
    cout << "enter the length of array: ";
    cin >> n;

    int arr[n];
    //take elements from user
    cout << "enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    bubble_sort(arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
