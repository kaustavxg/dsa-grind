#include<bits/stdc++.h>
using namespace std;

void quick_sort(int arr[], int low, int high){

    if(low < high){
        
    }

}

int main(){
    int n;
    cout << "array length: ";
    cin >> n;

    int arr[n];
    cout << "enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    quick_sort(arr, 0, n-1);

    // print the elements
    for(int i = 0; i < n; i++){
        cout << arr[i];
    }
}