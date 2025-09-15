# 🎯 Linked List Cycle II – Find the Starting Node of the Cycle

## 📌 Problem

Given a linked list, return the node where the cycle begins.
If there is **no cycle**, return `nullptr`.

* A cycle occurs if a node’s `next` pointer points back to any previously visited node.
* **Important:** The linked list must not be modified.

---

## 💡 Example

### Example 1

**Input:** `head = [3,2,0,-4], pos = 1`
**Output:** Node at index `1` (value = `2`)

### Example 2

**Input:** `head = [1,2], pos = 0`
**Output:** Node at index `0` (value = `1`)

### Example 3

**Input:** `head = [1], pos = -1`
**Output:** `nullptr` (no cycle)

---

## 🧠 Approach – Floyd’s Cycle Detection (Tortoise & Hare)

This builds on the classic cycle detection method:

1. **Phase 1 – Detect cycle:**

   * Use `slow` (1 step) and `fast` (2 steps).
   * If they ever meet, a cycle exists.
   * If `fast` reaches `nullptr`, no cycle.

2. **Phase 2 – Find cycle start:**

   * Reset `slow` to `head`.
   * Move both `slow` and `fast` one step at a time.
   * The node where they meet is the **start of the cycle**.

📖 **Mathematical Intuition:**

* Suppose the distance from head to cycle start = `L1`.
* Distance from cycle start to meeting point = `L2`.
* Cycle length = `C`.
* It can be proven that when they meet:

  ```
  distance(head → cycleStart) = distance(meetingPoint → cycleStart) (mod C)
  ```
* Resetting `slow` to `head` guarantees they’ll meet exactly at the cycle start.

---

## ⏱️ Complexity Analysis

* **Time Complexity:** `O(n)` – Each pointer traverses the list at most twice.
* **Space Complexity:** `O(1)` – No extra memory needed.

---

## ✅ Key Insights

* Always check `if (!head || head->next == nullptr)` to avoid null dereferencing.
* Simply detecting a cycle is not enough; the second phase is crucial.
* This algorithm is **optimal** compared to:

  * Using a hash set (`O(n)` extra space).
  * Modifying the list (not allowed in interviews).

---

## 📝 Code Reference

[solution.cpp](./solution.cpp)

---
