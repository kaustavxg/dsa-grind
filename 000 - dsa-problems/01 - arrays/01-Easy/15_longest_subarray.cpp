#include<bits/stdc++.h>
using namespace std;

/*
!Longest Subarray with given Sum K(Positives)
!Problem Statement: Given an array and a sum k, we need to print the length of the longest subarray that sums to k.

Examples

Example 1:
Input Format: N = 3, k = 5, array[] = {2,3,5}
Result: 2
Explanation: The longest subarray with sum 5 is {2, 3}. And its length is 2.

Example 2:
Input Format: N = 5, k = 10, array[] = {2,3,5,1,9}
Result: 3
Explanation: The longest subarray with sum 10 is {2, 3, 5}. And its length is 3.
*/

int len = 0;
int subarray(int arr[], int n, int key){
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = 0; j < n; j++){
            sum += arr[j];
            if(sum == key){
                len = max(len, j-i+1);
            }
        }
    }
    return len;
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

    int key;
    cout << "enter the key:";
    cin >> key;

    int subArr = subarray(arr, n, key);
    cout << "longest length in subarray is: " << subArr << endl;
}