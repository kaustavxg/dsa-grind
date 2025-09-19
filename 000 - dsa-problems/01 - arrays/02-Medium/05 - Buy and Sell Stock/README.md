# Q121 - Best Time to Buy and Sell Stock

### Link of the Problem: [Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/)

## Problem
You are given an array `prices` where `prices[i]` is the price of a given stock on the *i-th* day.  

You want to maximize your profit by choosing a single day to **buy** one stock and choosing a different day in the future to **sell** that stock.  

Return the maximum profit you can achieve from this transaction.  
If you cannot achieve any profit, return `0`.  

---

### Example 1
**Input:** prices = [7,1,5,3,6,4]  
**Output:** 5  
**Explanation:** Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.  

---

### Example 2
**Input:** prices = [7,6,4,3,1]  
**Output:** 0  
**Explanation:** No transaction is possible, so profit = 0.  

---

## Constraints
- 1 <= prices.length <= 10⁵  
- 0 <= prices[i] <= 10⁴  

---

## Intuition

### Brute Force
1. Try buying on every day `i`.  
2. For each `i`, try selling on every later day `j`.  
3. Calculate profit = `prices[j] - prices[i]`.  
4. Keep the maximum profit.  
- **Time Complexity:** O(n²).  

---

### Optimal Approach
1. Keep track of the **minimum price** seen so far as you move through the array.  
2. On each day, calculate the profit if you sell today = `prices[i] - minPrice`.  
3. Update the maximum profit whenever you find a bigger one.  
- **Time Complexity:** O(n).  
- **Space Complexity:** O(1).  
