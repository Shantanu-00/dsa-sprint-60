# 🔄 Reverse Linked List (Recursive Approach)

## 📌 Problem Statement

Given the head of a singly linked list, reverse the list and return the new head.

* You must perform the reversal using recursion.
* A linked list is defined as:

```cpp
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
```

---

## 🧩 Example

**Input:**

```
head = [1,2,3,4,5]
```

**Output:**

```
[5,4,3,2,1]
```

---

## 🚀 Approach (Recursive)

1. **Base Case**

   * If `head == nullptr` (empty list) → return `nullptr`.
   * If `head->next == nullptr` (only one node) → return `head`.

2. **Recursive Step**

   * Call recursion on `head->next` to reverse the rest of the list.
   * Let `newhead` be the head of the reversed sublist.
   * Re-link:

     * `front = head->next`
     * `front->next = head` (reverse the link)
     * `head->next = nullptr` (prevent cycle).

3. **Return**

   * Return `newhead` from every recursive call — the head of the fully reversed list.

---

## 🧠 Dry Run

For `head = [1 → 2 → 3 → nullptr]`:

* Call `reverseList(1)`

  * Calls `reverseList(2)`

    * Calls `reverseList(3)`

      * Returns `3` (base case)
    * `front = 3`, make `3->next = 2`, set `2->next = nullptr` → `3 → 2`
    * Returns `3`
  * `front = 2`, make `2->next = 1`, set `1->next = nullptr` → `3 → 2 → 1`
  * Returns `3`

Final: **`3 → 2 → 1`**

---

## ⏱ Complexity

* **Time Complexity:** O(n) → each node visited once.
* **Space Complexity:** O(n) → recursion stack due to function calls.

---

## ⚡ Key Insights

* Recursive approach naturally leverages the call stack to reverse links.
* More elegant and concise than iterative, but uses extra space (stack frames).
* Iterative method is more space-efficient (O(1)) but less elegant.
* Must set `head->next = nullptr` at the end of each recursive step to avoid cycles.

---

## 🏷 Pattern Tag

* Linked List
* Recursion
* Pointer Manipulation

---

