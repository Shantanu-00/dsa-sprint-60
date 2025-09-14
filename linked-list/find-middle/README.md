# 🎯 Find Middle of Linked List

## 📌 Problem Statement

Given the head of a singly linked list, return the **middle node** of the linked list.

* If there are two middle nodes, return the **second** middle node.

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

## 🧩 Examples

**Example 1:**

```
Input: head = [1,2,3,4,5]
Output: [3,4,5]
Explanation: Middle node is 3.
```

**Example 2:**

```
Input: head = [1,2,3,4,5,6]
Output: [4,5,6]
Explanation: Since the list has two middles (3 and 4), return the second one → 4.
```

---

## 🚀 Approach (Fast & Slow Pointer)

1. Initialize two pointers:

   * `slow = head`
   * `fast = head`

2. Traverse the list:

   * Move `slow` by **1 step** each iteration.
   * Move `fast` by **2 steps** each iteration.

3. Termination:

   * When `fast` reaches the end (`nullptr` or `fast->next == nullptr`),
   * `slow` will be at the middle node.

4. Return `slow`.

---

## 🧠 Dry Run

For `head = [1 → 2 → 3 → 4 → 5 → nullptr]`:

* Start: `slow = 1`, `fast = 1`
* Step 1: `slow = 2`, `fast = 3`
* Step 2: `slow = 3`, `fast = 5`
* End: `fast->next == nullptr` → return `slow = 3`.

For even-length list `[1 → 2 → 3 → 4 → 5 → 6]`:

* `slow` ends at **4** (second middle).

---

## ⏱ Complexity

* **Time Complexity:** O(n) → each node is visited once by `fast`.
* **Space Complexity:** O(1) → only two pointers used.

---

## ⚡ Key Insights

* The **fast & slow pointer** method avoids needing to count nodes or store them in an array.
* Automatically handles **even-length lists** by returning the second middle (as required).
* Works in a single traversal, making it optimal.

---

## 🏷 Pattern Tag

* Linked List
* Fast & Slow Pointer (Tortoise-Hare Algorithm)


