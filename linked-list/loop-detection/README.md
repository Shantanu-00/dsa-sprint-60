# 🔄 Linked List Cycle Detection

## 📌 Problem

Given a linked list, determine if it has a cycle.

A cycle occurs if a node’s `next` pointer points back to a previously visited node in the list, instead of `nullptr`.

* Return `true` if there is a cycle, otherwise `false`.

---

## 💡 Example

### Example 1

**Input:** `head = [3,2,0,-4], pos = 1` (tail connects to node index 1)
**Output:** `true`

### Example 2

**Input:** `head = [1,2], pos = 0` (tail connects to node index 0)
**Output:** `true`

### Example 3

**Input:** `head = [1], pos = -1` (no cycle)
**Output:** `false`

---

## 🧠 Approach – Floyd’s Cycle Detection (Tortoise & Hare)

* Maintain two pointers:

  * **Slow pointer** → moves 1 step at a time.
  * **Fast pointer** → moves 2 steps at a time.
* If the linked list has a cycle:

  * Both pointers will eventually meet inside the cycle.
* If the list has no cycle:

  * `fast` will reach `nullptr`.

---

## ⏱️ Complexity Analysis

* **Time Complexity:** `O(n)`
  Each node is visited at most twice (by `slow` and `fast`).

* **Space Complexity:** `O(1)`
  Uses only two extra pointers, no additional data structures.

---

## ✅ Key Insights

* The check `if (head == NULL)` avoids unnecessary processing on an empty list.
* Always check `fast != NULL && fast->next != NULL` to prevent segmentation faults.
* **Why Floyd’s Algorithm?**

  * More optimal than using a hash set (`O(n)` space).
  * Detects the cycle with constant memory.

---

## 📝 Code Reference

[solution.cpp](./solution.cpp)

---

