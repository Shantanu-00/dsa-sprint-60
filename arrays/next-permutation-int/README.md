

---

# 🎯 Next Permutation of an Integer Array

## 📌 Problem  
Given an integer array `nums`, rearrange its elements to form the **next lexicographically greater permutation**.  
If such arrangement is not possible (i.e., the array is in descending order), rearrange it to the **lowest possible order** (ascending).

---

## 💡 Intuition

To compute the next permutation, we follow **three critical steps**:

1. **Find the pivot index**:  
   Traverse the array from right to left and find the first index `i` such that `nums[i] < nums[i + 1]`.  
   This marks the point where the next permutation must begin.  
   If no such index is found, the array is in descending order—reverse it to get the first permutation.

2. **Find the next greater element**:  
   Traverse from the end again and find the first element greater than `nums[i]`.  
   Swap this element with the pivot.

3. **Reverse the suffix**:  
   Reverse the subarray from `i + 1` to the end to get the next smallest lexicographic order.

---

 

---

## ⏱ Complexity

- **Time:** `O(n)` – single pass for each step  
- **Space:** `O(1)` – in-place operations

---

## 🧠 Key Insight

- The next permutation is the **smallest permutation greater than the current one**.
- If the array is already the largest permutation (descending), reversing it gives the smallest.
- This algorithm is efficient and widely used in combinatorics and permutation generation.

---

## 🏷 Pattern Tags

- Array Manipulation  
- Greedy  
- Lexicographic Ordering  
- In-place Algorithms  
- Interview Problem

---


