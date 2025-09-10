#include<bits/stdc++.h>
using namespace std;

/*
!485. Max Consecutive Ones
//? https://leetcode.com/problems/max-consecutive-ones/description/

Given a binary array nums, return the maximum number of consecutive 1's in the array.
 

Example 1:

Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.
Example 2:

Input: nums = [1,0,1,1,0,1]
Output: 2
*/

int maxiOne(int arr[], int n){
    int maxi = 0;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == 1){
            cnt++;
            maxi = max(maxi, cnt);
        } else {
            cnt = 0;
        }
    }
    return maxi;
}
    

int main() {
    int n;
    cout << "size of array: ";
    cin >> n;

    int arr[n];
    cout << "enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int maximumArr = maxiOne(arr, n);
    cout << "maximum 1's in an array is: " << maximumArr << endl;
}