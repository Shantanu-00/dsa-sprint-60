# 🎯 Reverse Nodes in k-Group – Linked List Reversal

## 📌 Problem

Given the head of a linked list, reverse the nodes of the list **k at a time**, and return the modified list.

k is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of k then left-out nodes, in the end, should remain as they are.

You may not alter the values in the list's nodes, only nodes themselves may be changed.

---

## 💡 Example

### Example 1
**Input:** `head = [1,2,3,4,5]`, `k = 2`  
**Output:** `[2,1,4,3,5]`

### Example 2
**Input:** `head = [1,2,3,4,5]`, `k = 3`  
**Output:** `[3,2,1,4,5]`

---

## 🧠 Approach – Group-wise Reversal

The solution processes the linked list in groups of size k:

1. **Find k-th node** in current group
2. **Reverse the group** if complete (k nodes available)
3. **Link groups** properly after reversal
4. **Preserve remaining nodes** if group is incomplete

---

## ⚡ Algorithm Steps

### 1. **Find k-th Node** (`findk` function)
- Traverse k nodes from current position
- Return the k-th node or `nullptr` if group is incomplete

### 2. **Reverse Group** (`reverse` function)
- Recursively reverse the linked list
- Returns new head of reversed segment

### 3. **Main Logic** (`reverseKGroup` function)
- Use `temp` pointer to traverse the list
- For each group:
  - Find k-th node using `findk(temp, k-1)`
  - If group incomplete: link remaining nodes and break
  - Separate group by setting `kthNode->next = nullptr`
  - Reverse the group
  - Update head if it's the first group
  - Link previous group to new reversed head
  - Update pointers for next iteration

---

## ⏱️ Complexity Analysis

* **Time Complexity:** `O(n)`  
  - Each node is visited exactly twice (once for grouping, once for reversal)
  - Linear time relative to list length

* **Space Complexity:** `O(n/k)` for recursion stack  
  - Recursion depth depends on group size k
  - Each group reversal uses O(k) stack space

---

## ✅ Key Insights

* **Group Separation:** Setting `kthNode->next = nullptr` is crucial for clean reversal
* **Pointer Management:** Careful updating of `prev` and `temp` pointers maintains list connectivity
* **Edge Cases:** Handles when k > list length or list length not divisible by k
* **Head Update:** Only the first group reversal updates the overall head pointer

---

## 🔧 Technical Details

### `findk` Function:
```cpp
// Traverses k nodes from temp
// Returns k-th node or nullptr if group incomplete
```

### `reverse` Function:
```cpp
// Recursive reversal: O(k) stack space per group
// Returns new head of reversed segment
```

### Main Algorithm:
```cpp
// Processes groups sequentially
// Preserves node order for incomplete final group
// Maintains proper linking between reversed groups
```

---

## 🎯 Solution Highlights

- **Efficient grouping** with early termination for incomplete groups
- **Clean pointer manipulation** for list connectivity
- **Recursive reversal** for simplicity and clarity
- **Proper edge case handling** for various k values and list lengths

---

## 📝 Code Reference

[Solution Code](./solution.cpp)

---