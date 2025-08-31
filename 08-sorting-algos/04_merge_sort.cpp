#include <bits/stdc++.h>
using namespace std;



void merge(int arr[], int low, int mid ,int high){

    vector <int> temp;
    int left = low;
    int right = mid + 1;

    while(left <= mid && right <= high){
       if(arr[left] <= arr[right]){
        temp.push_back(arr[left]);
        left++;
       }
       else {
        temp.push_back(arr[right]);
        right++;
       }
    }

    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }

    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }



}

void mergeSort(int arr[], int n, int low, int high){

    // base case
    if(low == high) return;

    int mid = (low+high)/2;

    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);

    merge(arr, low, mid, high);

}

int main(){
    int n;
    cout << "enter the length of array: ";
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> i;
    }

    mergeSort(arr, 0, n-1);
    merge(arr, n)

    for(int i = 0; i < n; i++){
        cout << i << " ";
    }

    cout << endl;

    return 0;
}