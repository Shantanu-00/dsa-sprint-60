# 🟢 Remove N-th Node from End of Linked List

## 📌 Problem

Given the head of a singly linked list, remove the **n-th node from the end** of the list and return its head.

* The list is 1-indexed from the end.
* Must handle edge cases such as removing the head node.

---

## 💡 Example

### Example 1

**Input:** `head = [1,2,3,4,5], n = 2`
**Output:** `[1,2,3,5]`

### Example 2

**Input:** `head = [1], n = 1`
**Output:** `[]`

### Example 3

**Input:** `head = [1,2], n = 1`
**Output:** `[1]`

---

## 🧠 Approach

1. **Two-pointer technique:**

   * Use `fast` and `slow` pointers.
   * Move `fast` `n` steps ahead.

2. **Edge case – removing head:**

   * If `fast` becomes `nullptr` after moving `n` steps, the node to delete is the head.
   * Update head to `head->next` and delete the old head.

3. **Traverse the list:**

   * Move both `fast` and `slow` pointers until `fast` reaches the last node.
   * `slow` will point to the node **just before** the target node.

4. **Remove target node safely:**

   * Update `slow->next` to skip the target node.
   * Delete the removed node to free memory.

---

## ⏱️ Complexity

* **Time Complexity:** `O(n)`

  * Single traversal using two pointers.

* **Space Complexity:** `O(1)`

  * No extra data structures; in-place removal.

---

## ✅ Key Insights

* Two-pointer method allows single-pass removal.
* Always handle the head node case separately.
* Safe deletion prevents memory leaks.
* Works for lists of any length, including length = 1.

---
Here’s a **professional README.md** for your **Remove N-th Node from End of Linked List** solution:

---

# 🟢 Remove N-th Node from End of Linked List

## 📌 Problem

Given the head of a singly linked list, remove the **n-th node from the end** of the list and return its head.

* The list is 1-indexed from the end.
* Must handle edge cases such as removing the head node.

---

## 💡 Example

### Example 1

**Input:** `head = [1,2,3,4,5], n = 2`
**Output:** `[1,2,3,5]`

### Example 2

**Input:** `head = [1], n = 1`
**Output:** `[]`

### Example 3

**Input:** `head = [1,2], n = 1`
**Output:** `[1]`

---

## 🧠 Approach

1. **Two-pointer technique:**

   * Use `fast` and `slow` pointers.
   * Move `fast` `n` steps ahead.

2. **Edge case – removing head:**

   * If `fast` becomes `nullptr` after moving `n` steps, the node to delete is the head.
   * Update head to `head->next` and delete the old head.

3. **Traverse the list:**

   * Move both `fast` and `slow` pointers until `fast` reaches the last node.
   * `slow` will point to the node **just before** the target node.

4. **Remove target node safely:**

   * Update `slow->next` to skip the target node.
   * Delete the removed node to free memory.

---

## ⏱️ Complexity

* **Time Complexity:** `O(n)`

  * Single traversal using two pointers.

* **Space Complexity:** `O(1)`

  * No extra data structures; in-place removal.

---

## ✅ Key Insights

* Two-pointer method allows single-pass removal.
* Always handle the head node case separately.
* Safe deletion prevents memory leaks.
* Works for lists of any length, including length = 1.

---
