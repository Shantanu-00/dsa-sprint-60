# 🎯 Two Sum – Find Pair with Target Sum

## 📌 Problem  
Given an array of integers `nums` and an integer `target`, return the **indices of the two numbers** such that they add up to `target`.  
You may assume that **each input has exactly one solution**, and you **may not use the same element twice**.  
Return the answer in **any order**.

**Example:**  
```
Input: nums = [2, 7, 11, 15], target = 9  
Output: [0, 1]  // Because nums[0] + nums[1] == 9

Input: nums = [3, 2, 4], target = 6  
Output: [1, 2]

Input: nums = [3, 3], target = 6  
Output: [0, 1]
```

---

## 💡 Intuition  

To find two numbers that sum up to the target, we can use a **hash map** to store previously seen numbers and their indices:

1. **Iterate through the array**  
   - For each element `nums[i]`, compute the complement: `target - nums[i]`.

2. **Check if the complement exists**  
   - If it’s already in the map, we’ve found our pair → return their indices.

3. **Otherwise, store the current number**  
   - Add `nums[i]` and its index to the map for future lookup.

This approach avoids nested loops and ensures **constant-time lookup** for complements.

---

## ⏱ Complexity  

* **Time:** `O(n)` – single pass through the array  
* **Space:** `O(n)` – storing up to `n` elements in the hash map  

---

## 🧠 Key Insight  

* The hash map acts as a **memory of previously seen numbers**, allowing us to instantly check if the required complement exists.  
* This is a classic example of **trading space for time**—we use extra memory to achieve linear time complexity.  
* The problem guarantees one solution, so we can safely return as soon as we find a match.

---

## 🏷️ Pattern Tags  

* Hashing  
* Array  
* Two-Pointer (conceptually)  
* Lookup Optimization  
* Interview Problem  

---


