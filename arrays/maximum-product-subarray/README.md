# 🌟 Maximum Product Subarray

## 📌 Problem Statement

Given an integer array `nums`, find a contiguous subarray within the array that has the **largest product**, and return the product.

The subarray must contain at least one number.

---

## 🔍 Example

**Example 1:**

```
Input: nums = [2,3,-2,4]
Output: 6
Explanation: [2,3] has the largest product 6.
```

**Example 2:**

```
Input: nums = [-2,0,-1]
Output: 0
Explanation: The result cannot be 2, because [-2,-1] is not a contiguous subarray.
```

---

## 🚀 Algorithm / Intuition

The main difficulty comes from handling **negative numbers** and **zeros**:

* A negative number can turn a small product into a maximum one when multiplied by another negative.
* A zero resets the product.

### ✅ Approach (Prefix & Suffix Product Trick)

1. Maintain two running products:

   * **Prefix product (`pre`)**: product from left → right.
   * **Suffix product (`suf`)**: product from right → left.
2. Traverse the array once. For each index:

   * If the product becomes `0`, reset it to `1`.
   * Update `pre` and `suf` with the current elements.
   * Track the maximum product seen so far.
3. At the end, `maxi` will hold the maximum product subarray.

This avoids the need for extra arrays and handles negatives naturally.

---

## 🧠 Dry Run

Input:

```
nums = [2, 3, -2, 4]
```

* Start: pre = 1, suf = 1, maxi = -∞
* i = 0: pre = 2, suf = 4 → maxi = 4
* i = 1: pre = 6, suf = -8 → maxi = 6
* i = 2: pre = -12, suf = -2 → maxi = 6
* i = 3: pre = -48, suf = 3 → maxi = 6

Result = **6**

---

## ⏱ Complexity Analysis

* **Time Complexity:** O(n) → Single pass through array.
* **Space Complexity:** O(1) → Only variables used.

---

## ⚡ Key Insights

* Negative numbers flip product sign → checking prefix and suffix ensures we don’t miss maximum.
* Resetting on zero handles subarray breaks.
* Elegant O(n) and O(1) approach avoids dynamic programming arrays.

---

## 🏷 Pattern Tag

* Dynamic Programming
* Kadane’s Algorithm Variant
* Prefix/Suffix Product

---
