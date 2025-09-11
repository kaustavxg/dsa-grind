#include<bits/stdc++.h>
using namespace std;

/*
! 136. Single Number
? https://leetcode.com/problems/single-number/description/

Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.

 

Example 1:

Input: nums = [2,2,1]

Output: 1

Example 2:

Input: nums = [4,1,2,1,2]

Output: 4
*/

int singleNum(int arr[], int n){
    for(int i = 0; i < n; i++){
        int cnt = 0;
        int num = arr[i];
        for(int j = 0; j < n; j++){
            if(arr[j] == num){
                cnt++;
            }
        }
        if(cnt == 1){
            return num;
        }
    }
    return 0;
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

    int singleNumber = singleNum(arr, n);
    cout << "single element present here is: " << singleNumber << endl;
}