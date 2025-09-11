#include<bits/stdc++.h>
using namespace std;

/*
! 268. Missing Number

//? https://leetcode.com/problems/missing-number/description/
Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

 

#Example 1:
Input: nums = [3,0,1]

Output: 2

Explanation:

n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.

#Example 2:
Input: nums = [0,1]

Output: 2

Explanation:

n = 2 since there are 2 numbers, so all numbers are in the range [0,2]. 2 is the missing number in the range since it does not appear in nums.
*/

int missingNum(int arr[], int n){
    int sum = n * (n+1)/2;
    int s2 = 0;
    for(int i = 0; i < n-1; i++){
        s2 += arr[i];
    }
    return sum-s2;
}

int main(){
    int n;
    cout << "enter the size: ";
    cin >> n;

    int arr[n-1];
    cout << "enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int missingNumber = missingNum(arr, n);

    cout << "missing number: " << missingNumber << endl;

    return 0;
}