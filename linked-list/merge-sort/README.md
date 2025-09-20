# 🎯 Sort List – Merge Sort on Linked List

## 📌 Problem

Sort a singly linked list in **ascending order**.  
The solution must run in **O(n log n)** time and use **constant space** (apart from recursion stack).  

* Input: Head of a singly linked list.  
* Output: Sorted linked list.  

---

## 💡 Example

### Example 1

**Input:** `head = [4,2,1,3]`  
**Output:** `[1,2,3,4]`

### Example 2

**Input:** `head = [-1,5,3,4,0]`  
**Output:** `[-1,0,3,4,5]`

### Example 3

**Input:** `head = []`  
**Output:** `[]`

---

## 🧠 Approach – Merge Sort

The problem is solved using **merge sort** adapted for linked lists:

1. **Find the middle node** using fast & slow pointer technique.
   * Break the list into two halves at the middle.
   * Set `middle->next = nullptr` to split the list.

2. **Recursively sort** the left half and the right half.

3. **Merge** the two sorted halves using a dummy node.

📖 **Key Difference vs Array Merge Sort:**  
In arrays, splitting requires copying into subarrays.  
In linked lists, we can split by manipulating `next` pointers efficiently.

---

## ⏱️ Complexity Analysis

* **Time Complexity:** `O(n log n)`  
  * Each split divides the list into halves (log n levels).  
  * Each level requires merging all nodes (`O(n)`).

* **Space Complexity:** `O(1)` auxiliary (apart from recursion stack).  

---

## ✅ Key Insights

* Be careful to split the list correctly with `middle->next = nullptr`, else infinite recursion occurs.  
* Using a **dummy node** simplifies the merge step.  
* Merge Sort is the optimal sorting approach for linked lists because:  
  * QuickSort requires random access (not ideal).  
  * HeapSort needs extra space.  

---

## 📝 Code Reference

[solution.cpp](./solution.cpp)

---
