
#include<bits/stdc++.h>
using namespace std;

//! Brute Force 
int majority(int arr[], int n){
    for(int i = 0; i < n; i++){
        int cnt = 0;
        for(int j = 0; j < n; j++){
            if(arr[i] == arr[j]){
                cnt++;
            }
            if(cnt > (n/2)){
                return arr[i];
            }
        }
    }
    return 0;
}

//! Better Solution
int better_majority(int arr[], int n){
    map<int, int> mpp; // declare hashmap
        
    // 1. iterate in array and put inside hashmap
    for(int i = 0; i < n; i++){
        mpp[arr[i]]++;
    }

    // 2. iterate in hash map and check who has the biggest count
    for(auto it: mpp){
        if(it.second > (n/2)){
            return it.first;
        }
    }
    return -1;
}

//! Optimal Solution
//# Moore's Voting Algorithm
int optimal_majority(int arr[], int n){
    int cnt = 0;
    int el;
    for(int i = 0; i < n; i++){
        if(cnt == 0){
            cnt = 1;
            el = arr[i];
        } 
        else if(arr[i] == el){
            cnt++;
        } else {
            cnt --;
        }
    }

    int cnt1 = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == el) cnt1++;
    }
    if(cnt1 > (n/2)){
        return el;
    }

    return -1;
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

    //# brute force 
    // int brute_maxCount = majority(arr, n);
    // cout << "maximum count of the element is: " << brute_maxCount << endl;

    //# better 
    // int better_maxCount = better_majority(arr, n);
    // cout << "maximum count of the element is: " << better_maxCount << endl;

    //# optimal 
    int optimal_maxCount = better_majority(arr, n);
    cout << "maximum count of the element is: " << optimal_maxCount << endl;
}