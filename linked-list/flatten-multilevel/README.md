# 🎯 Flatten a Multilevel Doubly Linked List

## 📌 Problem

Given the head of a multilevel doubly linked list where each node has:
- `val` (integer value)
- `next` (pointer to next node)  
- `child` (pointer to child list)

Flatten the list so that all nodes appear in a single-level, sorted order. The flattened list should maintain ascending sorted order.

---

## 💡 Example

### Example 1
**Input:**
```
1 → 4 → 7
↓   ↓
2   5 → 8
↓   ↓
3   6   9
```

**Output:** `1 → 2 → 3 → 4 → 5 → 6 → 7 → 8 → 9`

### Example 2
**Input:**
```
10 → 20
↓
15 → 25
```

**Output:** `10 → 15 → 20 → 25`

---

## 🧠 Approach – Recursive Merge Sort Style

The solution uses a **divide and conquer** approach with **merge sort** principles:

1. **Recursively flatten** the remaining list (`head->next`)
2. **Merge** the current node's vertical list with the flattened horizontal list
3. **Sort during merge** to maintain ascending order

---

## ⚡ Algorithm Steps

### 1. **Merge Function** (`merge`)
- Creates a dummy node to simplify merging
- Compares nodes from two sorted lists (`l1` and `l2`)
- Appends the smaller node to the result list
- Sets `next` pointers to `nullptr` to maintain single-level structure
- Handles remaining nodes after one list is exhausted

### 2. **Recursive Flattening** (`flattenLinkedList`)
- Base case: empty list or single node
- Recursively flatten the `next` portion of the list
- Merge current node's vertical chain with flattened horizontal chain
- Set `next` to `nullptr` to prevent circular references

---

## ⏱️ Complexity Analysis

* **Time Complexity:** `O(n log n)`  
  - Each merge operation is `O(n)`
  - Recursive depth creates `log n` levels

* **Space Complexity:** `O(log n)` for recursion stack  
  - Proportional to the depth of recursion

---

## ✅ Key Insights

* **Merge Sort Adaptation:** Treats horizontal and vertical lists as separate sorted lists to merge
* **Recursive Structure:** Naturally handles nested child lists through recursion
* **Pointer Management:** Carefully sets `next` pointers to `nullptr` to maintain flattened structure
* **Sorted Merge:** Maintains ascending order during the flattening process

---

## 🔧 Technical Details

### Node Structure:
```cpp
class Node {
    int val;
    Node* next;    // Horizontal connection
    Node* child;   // Vertical connection (child list)
};
```

### Key Operations:
- **Vertical traversal:** Using `child` pointers
- **Horizontal traversal:** Using `next` pointers  
- **Merge logic:** Standard two-pointer merge of sorted lists

---

## 🎯 Solution Highlights

- **Elegant recursive approach** for handling nested structures
- **In-place merging** without extra data structures
- **Maintains sorted order** throughout flattening process
- **Handles arbitrary nesting depth** through recursion

---

## 📝 Code Reference

[Solution Code](./solution.cpp)

---