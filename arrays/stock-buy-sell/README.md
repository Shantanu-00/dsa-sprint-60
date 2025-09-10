# 📈 Best Time to Buy and Sell Stock

## 🧠 Problem Statement  
Given an array `prices[]` where `prices[i]` represents the price of a stock on day `i`, determine the maximum profit you can achieve by buying on one day and selling on another **later** day. You may only complete **one transaction** (i.e., buy once and sell once).

---

## 💡 Approach: Single Pass Greedy Strategy

We solve this problem in **O(n)** time using a greedy approach:

- Track the **minimum price** seen so far (`mini`) — this represents the best day to buy.
- For each day, calculate the **potential profit** if we sold on that day: `price - mini`.
- Update the **maximum profit** whenever the current profit exceeds the previous maximum.

This ensures we always buy at the lowest price before the current day and sell at the highest possible price after that.

---

## 🪜 Step-by-Step Logic

1. Initialize `mini` to a very large value (e.g., `INT_MAX`) and `profit` to `0`.
2. Iterate through each price:
   - Update `mini` if the current price is lower.
   - Calculate `price - mini` and update `profit` if it’s greater than the current max.
   //first update profit then mini this is intentional.
3. Return the final `profit`.

---

## 🧪 Example

**Input**: `[7, 1, 5, 3, 6, 4]`  
**Output**: `5`  
**Explanation**: Buy at `1`, sell at `6`, profit = `6 - 1 = 5`.

---

## ✅ Complexity

| Metric            | Value   |
|-------------------|---------|
| Time Complexity   | O(n)    |
| Space Complexity  | O(1)    |
| Passes over array | Single  |

---

## 📚 Summary

This is the most efficient solution for the one-transaction stock profit problem. It uses a single pass, constant space, and real-time tracking of the best buy/sell combination. 

---


