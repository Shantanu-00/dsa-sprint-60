
---

# 🟢 Add One to a Number Represented by Linked List

## 📌 Problem

Given a non-negative integer represented as a **singly linked list** of digits, add **1** to the number and return the resulting linked list.

* Each node contains a **single digit**.
* The **most significant digit** is at the head of the list.
* You must handle **carry propagation** correctly.

---

## 💡 Example

### Example 1

**Input:** `head = [1,2,3]`
**Output:** `[1,2,4]`

### Example 2

**Input:** `head = [9,9,9]`
**Output:** `[1,0,0,0]`

### Example 3

**Input:** `head = [0]`
**Output:** `[1]`

---

## 🧠 Approach

1. **Recursive Traversal to End:**

   * Recurse to the last node (least significant digit).
   * Add `1` at the last node, return carry if needed.

2. **Propagate Carry Backward:**

   * Each node adds the carry from its next node.
   * If node value becomes `10`, reset to `0` and return carry `1`.

3. **Handle Overflow:**

   * If the most significant digit still has carry after recursion,
     insert a new node `1` at the beginning.

---

## ⏱️ Complexity

* **Time Complexity:** `O(n)`

  * Each node is visited once during recursion.

* **Space Complexity:** `O(n)` (due to recursion stack).

  * Can be reduced to `O(1)` using iterative reverse-then-add approach.

---

## ✅ Key Insights

* Recursive carry handling simplifies the logic (natural backtracking).
* For iterative approaches, reversing the list is an alternative.
* Always check the final carry to decide if a new head node is required.
* Efficiently handles cases like `[9,9,9] → [1,0,0,0]`.

---

## 📝 Code Reference

[solution.cpp](./solution.cpp)

---

