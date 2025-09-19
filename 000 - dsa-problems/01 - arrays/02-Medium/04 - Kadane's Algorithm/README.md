# Q53 - LeetCode:  Maximum Subarray

### Link of the Problem: [Maximum Subarray](https://leetcode.com/problems/maximum-subarray/description/)

## Problem
Given an integer array `nums`, find the subarray with the largest sum, and return its sum.

### Example 1
**Input:** nums = [-2,1,-3,4,-1,2,1,-5,4]  
**Output:** 6  
**Explanation:** The subarray [4,-1,2,1] has the largest sum 6.  

### Example 2
**Input:** nums = [1]  
**Output:** 1  
**Explanation:** The subarray [1] has the largest sum 1.  

### Example 3
**Input:** nums = [5,4,-1,7,8]  
**Output:** 23  
**Explanation:** The subarray [5,4,-1,7,8] has the largest sum 23.  

---

## Intuition

### Brute Force
1. Take all possible subarrays.  
2. Add up their sums one by one.  
3. Keep track of the biggest sum.  
- **Time Complexity:** O(n³) → very slow.  

---

### Better Approach
1. Start from each index and keep adding the next numbers instead of recalculating everything.  
2. This avoids repeating the same work.  
3. Update the maximum whenever you find a bigger sum.  
- **Time Complexity:** O(n²).  

---

### Optimal Approach (`Kadane’s Algorithm`)
1. Keep a running sum while going through the array.  
2. If the running sum becomes negative, reset it to 0 (because it will only reduce future sums).  
3. Track the maximum sum found so far.  
- **Time Complexity:** O(n).  
- **Space Complexity:** O(1).  
