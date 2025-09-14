# 🔄 Reverse Linked List (Iterative Approach)

## 📌 Problem Statement

Given the head of a singly linked list, reverse the list in place and return the new head.
You must do this using an **iterative approach**.

The list node structure is:

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

## 🚀 Approach (Iterative – Pointer Reversal)

1. **Initialization**

   * `prev = nullptr` → keeps track of reversed part.
   * `head` → current node being processed.
   * `temp = head->next` → pointer to store next node (avoid losing it).

2. **Loop until end of list**

   * Save next node: `temp = head->next`.
   * Reverse link: `head->next = prev`.
   * Move `prev` one step forward: `prev = head`.
   * Move `head` one step forward: `head = temp`.

3. **Final Step**

   * When loop ends, `head` points to `nullptr` and `prev` points to the new head.
   * Return `prev`.

---

## 🧠 Dry Run

For `head = [1 → 2 → 3 → nullptr]`:

* **Iteration 1:**

  * `temp = 2`, `head->next = nullptr`, `prev = 1`, `head = 2`
  * List: `1 → nullptr`

* **Iteration 2:**

  * `temp = 3`, `head->next = 1`, `prev = 2`, `head = 3`
  * List: `2 → 1 → nullptr`

* **Iteration 3:**

  * `temp = nullptr`, `head->next = 2`, `prev = 3`, `head = nullptr`
  * List: `3 → 2 → 1 → nullptr`

Return: `3` (new head).

---

## ⏱ Complexity

* **Time Complexity:** O(n) → each node visited once.
* **Space Complexity:** O(1) → no extra space apart from a few pointers.

---

## ⚡ Key Insights

* Iterative method is **more memory-efficient** than recursion (no call stack usage).
* The critical step is **saving `temp = head->next`** before breaking links — forgetting this loses the rest of the list.
* Unlike recursion, no risk of stack overflow for large lists.

---

## 🏷 Pattern Tag

* Linked List
* Iterative Pointer Manipulation

---

