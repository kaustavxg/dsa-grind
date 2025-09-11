#include<bits/stdc++.h>
using namespace std;

/*
!26. Remove Duplicates from Sorted Array
? https://leetcode.com/problems/remove-duplicates-from-sorted-array/

Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.

Example 1:

Input: nums = [1,1,2]
Output: 2, nums = [1,2,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).

*/

void optimal_removeDupe(){
    class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            int i = 0;
            for(int j = 1; j < nums.size(); j++){
                if(nums[j] != nums[i]){
                    nums[i+1] = nums[j];
                    i++;
                }
            }
            return i+1;
        }
    };
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
}