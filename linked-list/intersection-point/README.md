
---

# 🟢 Intersection of Two Linked Lists

## 📌 Problem

Given the heads of two singly linked lists `headA` and `headB`, return the **node at which the two lists intersect**.
If the two linked lists have no intersection, return `nullptr`.

* Intersection means the two lists share the **same reference node**, not just equal values.
* The lists may have different lengths before the intersection point.

---

## 💡 Example

### Example 1

**Input:**
`headA = [4,1,8,4,5]`
`headB = [5,6,1,8,4,5]`
**Output:** Node with value `8`

### Example 2

**Input:**
`headA = [1,9,1,2,4]`
`headB = [3,2,4]`
**Output:** Node with value `2`

### Example 3

**Input:**
`headA = [2,6,4]`
`headB = [1,5]`
**Output:** `nullptr` (no intersection)

---

## 🧠 Approach – Two Pointer Switching

1. **Initialize two pointers:**

   * `list1` at `headA`
   * `list2` at `headB`

2. **Traverse simultaneously:**

   * If `list1` reaches the end, move it to `headB`.
   * If `list2` reaches the end, move it to `headA`.

3. **Convergence:**

   * Both pointers traverse exactly `lenA + lenB`.
   * If there is an intersection, they meet at the intersecting node.
   * If no intersection, both will reach `nullptr` at the same time.

---

## ⏱️ Complexity

* **Time Complexity:** `O(n + m)`

  * Each pointer traverses both lists once.
* **Space Complexity:** `O(1)`

  * Only two pointers are used.

---

## ✅ Key Insights

* This technique works because by switching lists, both pointers traverse the same total length.
* No extra data structures are needed (unlike a hash set approach).
* Always check for edge cases like `headA = nullptr` or `headB = nullptr`.

---

## 📝 Code Reference

[solution.cpp](./solution.cpp)

---


