# 🟢 Linked List Palindrome Check

## 📌 Problem

Given the head of a singly linked list, determine if the linked list is a **palindrome**.

* A palindrome reads the same forwards and backwards.
* The solution should ideally use **O(1) extra space** and **O(n) time**.

---

## 💡 Example

### Example 1

**Input:** `head = [1,2,2,1]`
**Output:** `true`

### Example 2

**Input:** `head = [1,2]`
**Output:** `false`

---

## 🧠 Approach

1. **Find the middle of the linked list:**

   * Use the fast & slow pointer technique to locate the middle.

2. **Reverse the second half:**

   * Reverse the nodes after the middle for in-place comparison.

3. **Compare both halves:**

   * Traverse the first half and reversed second half simultaneously.
   * If all values match → palindrome, else not.

4. **Restore the list (optional but recommended):**

   * Reverse the second half again to maintain original list structure.

---

## ⏱️ Complexity

* **Time Complexity:** `O(n)`

  * Traversal to find middle, reverse second half, and comparison.

* **Space Complexity:** `O(1)`

  * In-place reversal, no extra data structures used.

---

## ✅ Key Insights

* Fast & slow pointers efficiently find the middle of the list.
* In-place reversal ensures O(1) space usage.
* Restoring the list maintains data integrity.
* Handles both **even** and **odd** length lists naturally.
* Edge cases: single-node or empty list → always palindrome.

---
