# 🎯 Next Permutation of an Integer Array

## 📌 Problem  
Given an array of integers `nums`, rearrange its elements to form the **next lexicographically greater permutation**.  
If such arrangement is not possible (i.e., the array is in descending order), rearrange it to the **lowest possible order** (i.e., sorted in ascending order).  
The replacement must be **in-place** and use only **constant extra memory**.

**Example:**  
```

Input: nums = \[1, 2, 3]
Output: \[1, 3, 2]

Input: nums = \[3, 2, 1]
Output: \[1, 2, 3]

Input: nums = \[2, 3, 1]
Output: \[3, 1, 2]

```

---

## 💡 Intuition  

To find the next lexicographic permutation, we follow **three key steps**:  

1. **Find the pivot index**  
   - Traverse from right to left and locate the first index `i` such that `nums[i] < nums[i + 1]`.  
   - This is the position where rearrangement must occur.  
   - If no such index exists, the array is strictly descending → reverse it to get the smallest order.  

2. **Find the next greater element**  
   - From the end of the array, find the first element greater than `nums[i]`.  
   - Swap this element with the pivot.  

3. **Reverse the suffix**  
   - Reverse the subarray from `i + 1` to the end.  
   - This ensures the suffix is in the smallest possible order after the swap.  

---

## ⏱ Complexity  

* **Time:** `O(n)` – each step requires only linear traversal  
* **Space:** `O(1)` – done in-place with no extra memory  

---

## 🧠 Key Insight  

* The **next permutation** is the smallest permutation that is strictly greater than the current one.  
* If the array is already the largest permutation, simply reversing it gives the smallest.  
* This method ensures minimal change while maintaining lexicographic order.  

---

## 🏷️ Pattern Tags  

* Array Manipulation  
* Greedy  
* Lexicographic Ordering  
* In-place Algorithms  
* Interview Problem  


