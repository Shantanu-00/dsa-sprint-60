# 🎯 Bubble Sort Algorithm

## 📌 Problem Statement

Implement the **Bubble Sort** algorithm to sort an array of integers in **ascending order**.

Bubble Sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted.

---

## 💡 Algorithm Overview

### **How Bubble Sort Works:**
1. Start from the beginning of the array
2. Compare each pair of adjacent elements
3. If they are in wrong order (left > right), swap them
4. After each pass, the largest unsorted element "bubbles up" to its correct position
5. Repeat until no more swaps are needed

### **Visual Example:**
**Initial:** `[5, 1, 4, 2, 8]`  
**Pass 1:** `[1, 4, 2, 5, 8]`  
**Pass 2:** `[1, 2, 4, 5, 8]`  
**Pass 3:** `[1, 2, 4, 5, 8]` (already sorted)

---

## ⚡ Implementation Details

### **Code Structure:**
```cpp
vector<int> bubblesort(vector<int>& nums) {
    int n = nums.size();
    for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (nums[j] > nums[j + 1]) {
                swap(nums[j], nums[j + 1]);
            }
        }
    }
    return nums;
}
```

### **Key Features:**
- **Outer loop:** Controls the number of passes (`n-1` passes needed)
- **Inner loop:** Compares adjacent elements in each pass
- **Optimization:** Reduces inner loop range after each pass (largest elements bubble to end)
- **In-place sorting:** Modifies the original array

---

## ⏱️ Complexity Analysis

### **Time Complexity:**
- **Best Case:** `O(n)` - when array is already sorted (with optimization)
- **Average Case:** `O(n²)` - typical performance
- **Worst Case:** `O(n²)` - when array is reverse sorted

### **Space Complexity:** `O(1)`
- Only uses constant extra space for temporary variables
- In-place sorting algorithm

---

## ✅ Algorithm Properties

| Property | Description |
|----------|-------------|
| **Stable** | ✅ Preserves order of equal elements |
| **In-place** | ✅ Uses constant extra space |
| **Adaptive** | ✅ Can be optimized to detect sorted arrays |
| **Comparison-based** | ✅ Uses comparisons to determine order |

---

## 🎯 Sample Input/Output

### **Input:**
```cpp
vector<int> nums = {5, 1, 4, 2, 8};
```

### **Execution:**
```
Original array: 5 1 4 2 8
Sorted array: 1 2 4 5 8
```

### **Step-by-step Process:**
1. Compare 5 and 1 → swap → `[1, 5, 4, 2, 8]`
2. Compare 5 and 4 → swap → `[1, 4, 5, 2, 8]`
3. Compare 5 and 2 → swap → `[1, 4, 2, 5, 8]`
4. Compare 5 and 8 → no swap
5. Repeat process for remaining unsorted portion

---

## 🔧 Optimization Opportunities

### **Early Termination:**
```cpp
bool swapped;
for (int i = n - 1; i > 0; i--) {
    swapped = false;
    for (int j = 0; j < i; j++) {
        if (nums[j] > nums[j + 1]) {
            swap(nums[j], nums[j + 1]);
            swapped = true;
        }
    }
    if (!swapped) break; // Array is sorted
}
```

---

## 📝 Code Reference

[Solution Code](./bubble_sort.cpp)

 
**Function:** `bubblesort(vector<int>& nums)`  
**Usage:** Call with integer vector to get sorted result

---