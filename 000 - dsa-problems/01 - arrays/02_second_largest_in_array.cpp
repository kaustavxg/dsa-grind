#include<bits/stdc++.h>
using namespace std;

/*

!  Second Largest Number
? https://www.naukri.com/code360/problems/ninja-and-the-second-order-elements_6581960?leftPanelTabValue=PROBLEM

#Problem statement
You have been given an array ‘a’ of ‘n’ unique non-negative integers.

Find the second largest and second smallest element from the array.


Return the two elements (second largest and second smallest) as another array of size 2.


Example :
Input: ‘n’ = 5, ‘a’ = [1, 2, 3, 4, 5]
Output: [4, 2]

The second largest element after 5 is 4, and the second smallest element after 1 is 2.

*/

void secondLargest(int arr[], int n){

    int largest = arr[0];
    int sec_largest = -1;

    for(int i = 0; i <  n; i++){
        if(arr[i] > largest){
            sec_largest = largest;
            largest = arr[i];
        } else if(arr[i] < largest && arr[i] > sec_largest){
            sec_largest = arr[i];
        }
    }
    cout << "second largest: " << sec_largest << endl;
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

    secondLargest(arr, n);

    
}