# 🎯 Add Two Numbers – Linked List Addition

## 📌 Problem

You are given two non-empty linked lists representing two non-negative integers. The digits are stored in **reverse order**, and each node contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

---

## 💡 Example

### Example 1
**Input:** `l1 = [2,4,3]`, `l2 = [5,6,4]`  
**Output:** `[7,0,8]`  
**Explanation:** 342 + 465 = 807

### Example 2
**Input:** `l1 = [0]`, `l2 = [0]`  
**Output:** `[0]`

### Example 3
**Input:** `l1 = [9,9,9,9,9,9,9]`, `l2 = [9,9,9,9]`  
**Output:** `[8,9,9,9,0,0,0,1]`

---

## 🧠 Approach – Digit-by-Digit Addition with Carry

The solution performs **schoolbook addition** from least significant digit to most significant digit:

1. **Initialize pointers** to traverse both input lists
2. **Process digits** while either list has nodes remaining
3. **Handle carry** between digit additions
4. **Create new nodes** for each digit of the result
5. **Handle final carry** if any remains after processing all digits

---

## ⚡ Algorithm Steps

1. Create a **dummy node** to simplify list construction
2. Initialize `carry = 0`
3. While `l1` OR `l2` has nodes remaining:
   - Calculate `sum = carry + l1->val (if exists) + l2->val (if exists)`
   - Create new node with value `sum % 10`
   - Update `carry = sum / 10`
   - Move to next nodes in both lists
4. If `carry > 0` after processing all digits, add final carry node
5. Return `dummyNode->next`

---

## ⏱️ Complexity Analysis

* **Time Complexity:** `O(max(m, n))`  
  - Where `m` and `n` are lengths of the two lists
  - We process each node exactly once

* **Space Complexity:** `O(max(m, n))`  
  - The length of the new list is at most `max(m, n) + 1`

---

## ✅ Key Insights

* **Reverse order storage** makes this problem easier - we start from least significant digit
* **Dummy node technique** simplifies linked list construction
* **Carry handling** is crucial - it can propagate through multiple digits
* **Unequal list lengths** are handled gracefully by checking node existence
* **Final carry** must be handled separately after loop completion

---

## 🎯 Solution Highlights

```cpp
// Key features of this solution:
- Handles lists of different lengths seamlessly
- Efficient carry propagation
- Clean node creation and linking
- Proper memory management
- Handles edge cases (zero inputs, final carry)
```

---

## 📝 Code Reference

[Solution Code](./solution.cpp)

---