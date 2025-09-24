# 🎯 Rotate Linked List to the Right

## 📌 Problem

Given the head of a linked list, rotate the list to the right by `k` places.

* **Input:** Head of a singly linked list and integer `k`
* **Output:** Head of the rotated linked list

---

## 💡 Example

### Example 1
**Input:** `head = [1,2,3,4,5]`, `k = 2`  
**Output:** `[4,5,1,2,3]`  
**Explanation:** Rotate 1 step: `[5,1,2,3,4]` → Rotate 2 steps: `[4,5,1,2,3]`

### Example 2
**Input:** `head = [0,1,2]`, `k = 4`  
**Output:** `[2,0,1]`  
**Explanation:** Rotate 1: `[2,0,1]` → Rotate 2: `[1,2,0]` → Rotate 3: `[0,1,2]` → Rotate 4: `[2,0,1]`

### Example 3
**Input:** `head = []`, `k = 0`  
**Output:** `[]`

---

## 🧠 Approach – Circular List Technique

The solution uses an efficient **circular linked list** approach:

1. **Calculate effective rotations** using modulo operation
2. **Make the list circular** by connecting tail to head
3. **Find new head and tail** based on rotation count
4. **Break the circle** at the new tail

---

## ⚡ Algorithm Steps

### 1. **Edge Case Handling**
- If list is empty or has only one node, return as-is
- If `k % length == 0`, no rotation needed

### 2. **Calculate Length and Find Tail**
- Traverse to find list length and locate tail node
- Use modulo to handle `k > length` cases: `k = k % length`

### 3. **Create Circular List**
- Connect tail to head: `tail->next = head`

### 4. **Find New Head and Tail**
- New tail is at position `length - k` from original head
- New head is the node after new tail
- Break the circle: `newTail->next = nullptr`

---

## ⏱️ Complexity Analysis

* **Time Complexity:** `O(n)`  
  - One pass to find length and tail
  - One pass to find new rotation point
  - Linear time relative to list length

* **Space Complexity:** `O(1)`  
  - Constant extra space used
  - Only pointer variables required

---

## ✅ Key Insights

* **Modulo Optimization:** `k % length` handles large rotation values efficiently
* **Circular Technique:** Making list circular simplifies rotation logic
* **Tail Tracking:** Finding tail is crucial for circular connection
* **Position Calculation:** New tail position = `length - k` from start

---

## 🔧 Key Code Sections

### Length Calculation & Tail Finding:
```cpp
ListNode* tail = head;
int length = 1;
while(tail->next != nullptr){
    length++;
    tail = tail->next;
}
```

### Effective Rotations:
```cpp
k = k % length;  // Handle k > length cases
if(k == 0) return head;  // No rotation needed
```

### Circular List & Rotation:
```cpp
tail->next = head;  // Create circle
int count = length - k;
// Find new tail position
// Set new head and break circle
```

---

## 🎯 Solution Highlights

- **Single pass** for length calculation
- **Efficient modulo handling** for large k values
- **In-place rotation** without extra memory
- **Clean pointer manipulation** for circular list technique

---

## 📝 Code Reference

[Solution Code](./solution.cpp)

---