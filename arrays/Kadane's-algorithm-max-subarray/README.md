## 📌 Problem
Given an integer array `nums`, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

**Example:**


Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6

---

## 💡 Intuition
The maximum subarray must be a **contiguous subarray**.  
At each index, we have two choices:
1. **Extend the previous subarray** by including `nums[i]`.
2. **Start a new subarray** from `nums[i]` if the previous sum became negative.

The key idea:  
- The intuition of the algorithm is not to consider the subarray as a part of the answer if its sum is less than 0. A subarray with a sum less than 0 will always reduce our answer and so this type of subarray cannot be a part of the subarray with maximum sum.
thus we drop the subarray by resetting sum as 0

---

## 🔑 Approach (Kadane’s Algorithm)

1.We will run a loop(say i) to iterate the given array.
2.Now, while iterating we will add the elements to the sum variable and consider the maximum one.
3.If at any point the sum becomes negative we will set the sum to 0 as we are not going to consider it as a part of our answer

---

## ⏱ Complexity
- **Time:** `O(n)` (single pass)  
- **Space:** `O(1)` (only a few variables)  

---

