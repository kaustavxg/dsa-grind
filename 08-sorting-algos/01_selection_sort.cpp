#include <bits/stdc++.h>
using namespace std;

// Selection Sort Function
int selection_sort(int arr[], int n) {

    //! Outer loop: runs (n-1) times
    // Each iteration places the correct element at index i
    for(int i = 0; i <= n-2; i++) {
        int mini = i;   // assume current index is the smallest

        //! Inner loop: find the actual smallest element in the remaining array
        for(int j = i; j <= n-1; j++) {
            if(arr[j] < arr[mini]) {
                mini = j;   // update index of smallest element
            }
        }

        // Swap the found smallest element with the element at index i
        swap(arr[mini], arr[i]);
    }
    return 0;
}

int main() {

    int n; 
    cin >> n;   // read number of elements in the array

    int arr[n]; // declare array of size n

    // Input the array elements
    for(int i = 0; i < n; i++) cin >> arr[i];

    /*
       ! Why not arr[n] ?
       # -> If you try arr[n], you are asking for the element just after the last one.
       # -> But your array ends at arr[n-1].
         -> So arr[n] is outside the array → out of bounds.
         -> Accessing out of bounds memory in C++ = undefined behavior 
          (random garbage values, crashes, etc.).
    */

    // Call selection sort
    selection_sort(arr, n);

    // Print sorted array
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
