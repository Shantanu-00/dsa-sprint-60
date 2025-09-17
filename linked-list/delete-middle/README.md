# 🟢 Delete Middle Node of Linked List

## 📌 Problem

Given the head of a singly linked list, delete the **middle node** and return the head of the modified list.

* For lists with **even number of nodes**, remove the **second middle node**.
* If the list has only one node, return `nullptr`.

---

## 💡 Example

### Example 1

**Input:** `head = [1,3,4,7,1,2,6]`
**Output:** `[1,3,4,1,2,6]`

### Example 2

**Input:** `head = [1,2,3,4]`
**Output:** `[1,2,4]`

### Example 3

**Input:** `head = [2]`
**Output:** `[]`

---

## 🧠 Approach

1. **Two-pointer technique:**

   * Use `fast` and `slow` pointers to locate the middle node efficiently.
   * Move `fast` two steps at a time and `slow` one step at a time.

2. **Edge case – single-node list:**

   * If the list has only one node, return `nullptr`.

3. **Delete middle node:**

   * `slow` will point to the node **just before** the middle.
   * Update `slow->next` to skip the middle node.
   * Delete the middle node to free memory.

---

## ⏱️ Complexity

* **Time Complexity:** `O(n)`

  * Single traversal with fast & slow pointers.

* **Space Complexity:** `O(1)`

  * In-place deletion without extra structures.

---

## ✅ Key Insights

* Fast & slow pointers are ideal for middle node detection.
* Always handle single-node lists separately.
* Safe deletion ensures no memory leaks.
* Works for both odd and even-length lists.

---

