/*
!  Largest Element in the Array

#Problem statement
Given an array ‘arr’ of size ‘n’ find the largest element in the array.



#Example:

Input: 'n' = 5, 'arr' = [1, 2, 3, 4, 5]

Output: 5

#Explanation: From the array {1, 2, 3, 4, 5}, the largest element is 5.

*/

#include<bits/stdc++.h>
using namespace std;

void largestElement_bruteForce(){

}

void largestElement_optimal(int arr[], int n){
    int largest = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    cout << "largest: " << largest << endl;
}

int main(){
    int n;
    cout << "enter the length: ";
    cin >> n;

    int arr[n];
    cout << "enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // largestElement_bruteForce();
    largestElement_optimal(arr, n);
}