#include<bits/stdc++.h>
using namespace std;

int brute_buySell(int arr[], int n){
    int maxi = 0;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(arr[j] > arr[i]){
                maxi = max(arr[j] - arr[i], maxi);
            }
        }
    }
    return maxi;
}

int optimal_buySell(int arr[], int n){
    int maxi = 0;
    int minPrice = INT_MAX;
    for(int i = 0; i < n; i++){
        minPrice = min(minPrice, arr[i]);
        maxi = max(maxi, arr[i] - minPrice);
    }
    return maxi;
}


int main(){

    int n;
    cout << "enter the size: ";
    cin >> n;

    int arr[n];
    cout << "enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // int brute_maxi = brute_buySell(arr, n);
    // cout << "maximum profit is: " << brute_maxi << endl;

    int optimal_maxi = optimal_buySell(arr, n);
    cout << "maximum profit is: " << optimal_maxi << endl;
}