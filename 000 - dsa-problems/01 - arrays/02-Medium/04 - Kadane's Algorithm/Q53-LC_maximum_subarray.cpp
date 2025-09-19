#include<bits/stdc++.h>
using namespace std;

//# brute force approach
int brute_kadane(int arr[], int n){
    int maxi = INT_MIN;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            int sum = 0;
            for(int k = i; k <= j; k++){
                sum += arr[k]; 
            }
            maxi = max(sum, maxi);
        }
    }
    return maxi;
}

//# better approach
int better_kadane(int arr[], int n){
    int maxi = INT_MIN;
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = i; j < n; j++){
            sum = sum + arr[j];
            maxi = max(sum, maxi);
        }
            
    }
    return maxi;
}

//# optimal - kadane
int optimal_kadane(int arr[], int n) {
    long long sum = 0;
    long long maxi = LONG_MIN;
    for(int i = 0; i < n; i++){
        sum = sum + arr[i];

        if(sum > maxi){
            maxi = sum;
        }

        if(sum < 0){
            sum = 0;
        }
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

    //# brute force approach
    // int brute_maxiSubarray = brute_kadane(arr, n);
    // cout << "maximum subarray is: " << brute_maxiSubarray << endl;


    //# better approach
    // int better_maxiSubarray = better_kadane(arr, n);
    // cout << "maximum subarray is: " << better_maxiSubarray << endl;

    //# optimal - kadane
    int optimal_maxiSubarray = optimal_kadane(arr, n);
    cout << "maximum subarray is: " << optimal_maxiSubarray << endl;

    return 0;
}