
---

# 🎯 Odd-Even Linked List – Rearrange by Node Position

## 📌 Problem

Given the head of a singly linked list, group all the **odd-indexed nodes** together followed by the **even-indexed nodes**, and return the reordered list.

* Indexing is based on **node position**, not value.
* The relative order within the odd group and within the even group must be preserved.
* Must be done **in-place** with `O(1)` extra space.

---

## 💡 Example

### Example 1

**Input:** `head = [1,2,3,4,5]`
**Output:** `[1,3,5,2,4]`

### Example 2

**Input:** `head = [2,1,3,5,6,4,7]`
**Output:** `[2,3,6,7,1,5,4]`

---

## 🧠 Approach – Two Pointer Separation

1. **Initialize pointers**

   * `odd` → head (first node).
   * `even` → head->next (second node).
   * Keep a reference `evenHead` to reconnect later.

2. **Rearrange while traversing**

   * Link `odd->next` to `even->next`.
   * Move `odd` forward.
   * Link `even->next` to `odd->next`.
   * Move `even` forward.

3. **Reconnect lists**

   * Attach the even list back to the end of the odd list.

---

## 📖 Example Walkthrough

For `head = [1,2,3,4,5]`:

```
Odd: 1 → 3 → 5
Even: 2 → 4
Final: 1 → 3 → 5 → 2 → 4
```

---

## ⏱️ Complexity Analysis

* **Time Complexity:** `O(n)` – Each node is visited once.
* **Space Complexity:** `O(1)` – No extra memory, only pointers.

---

## ✅ Key Insights

* Important to preserve `evenHead` before rearranging, otherwise the even list is lost.
* Safer while-loop condition: `while (even != nullptr && even->next != nullptr)`.
* Works in-place, so no extra arrays or data structures needed.

---

## 📝 Code Reference

[solution.cpp](./solution.cpp)

---

