# 🔄 Linked List Cycle Length

## 📌 Problem

Given the head of a singly linked list, determine the **length of the cycle** if one exists.
If there is no cycle, return `0`.

---

## 💡 Example

### Example 1

**Input:** `head = [1,2,3,4,5], pos = 2`
**Output:** `3`
**Explanation:** The cycle is `3 → 4 → 5 → 3`, so length = `3`.

### Example 2

**Input:** `head = [1,2], pos = -1`
**Output:** `0`
**Explanation:** No cycle exists.

---

## 🧠 Approach – Floyd’s Cycle Detection with Length Finder

1. **Detect the cycle (Tortoise & Hare):**

   * Use two pointers: `slow` (1 step) and `fast` (2 steps).
   * If they ever meet, a cycle exists.
   * If `fast` or `fast->next` becomes `NULL`, no cycle.

2. **Find cycle length:**

   * Once slow & fast meet, keep one pointer fixed.
   * Move the other pointer until it comes back to the same node, counting steps.
   * That count = cycle length.

---

## 🔎 Why it works

* When `slow` and `fast` meet, they are guaranteed to be inside the cycle.
* From that meeting point, traversing until we reach the same node again covers **exactly one loop**.

---

## ⏱️ Complexity

* **Time Complexity:**

  * `O(n)` for cycle detection + `O(c)` for counting (where `c` is cycle length).
  * Overall: `O(n)`

* **Space Complexity:** `O(1)`

  * No extra data structures needed, just pointers and a counter.

---

## ⚠️ Common Pitfalls

* ❌ Forgetting to check `fast != NULL && fast->next != NULL` → leads to segmentation fault.
* ❌ Returning `0` incorrectly before checking all possibilities.
* ❌ Mixing up the `slow` and `fast` in the length-finding helper (must traverse with one pointer while keeping the other fixed).
* ✅ Correct fix: use a helper function `lengthFinder(slow, fast)` to encapsulate logic.

---

## 📝 Code Reference


[code](./solution.cpp)

---

