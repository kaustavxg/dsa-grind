# Q169 LeetCode - Majority Element

### Link of the Problem: [Majority Element](https://leetcode.com/problems/majority-element/description/)


## Problem Statement 
Given an array `nums` of size `n`, return the majority element.  

The majority element is the element that appears more than ⌊n / 2⌋ times.  
You may assume that the majority element always exists in the array.  

### Example 1
**Input:** nums = [3,2,3]  
**Output:** 3  

### Example 2
**Input:** nums = [2,2,1,1,1,2,2]  
**Output:** 2  

### Constraints
- n == nums.length  
- 1 <= n <= 5 * 10^4  
- -10^9 <= nums[i] <= 10^9  

---


## Brute Force Approach
1. Pick an element from the array.  
2. Count its frequency by scanning the whole array.  
3. If frequency > n/2, that element is the majority. 

## Better Approach
1. Use a hash map to store element frequencies.  
2. Iterate through the array and update the count of each element in the hash map.  
3. Traverse the hash map to find the element with the maximum count.  
4. Return that element as the majority.  

## Optimal Approach
Use: `Moore's Voting Algorithm`

---

## Example Walkthrough
- Input: [2, 2, 1, 1, 1, 2, 2], n = 7  
  - Pick `2` → frequency = 4 → 4 > 7/2 → majority = 2  

- Input: [3, 2, 3], n = 3  
  - Pick `3` → frequency = 2 → 2 > 3/2 → majority = 3  
