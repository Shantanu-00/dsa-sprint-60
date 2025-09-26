# 🎯 Selection Sort Algorithm

## 📌 Problem Statement

Implement the **Selection Sort** algorithm to sort an array of integers in **ascending order**.

Selection Sort is an in-place comparison-based algorithm that divides the input list into two parts: a sorted sublist and an unsorted sublist. The algorithm repeatedly finds the minimum element from the unsorted part and puts it at the beginning of the unsorted part.

---

## 💡 Algorithm Overview

### **How Selection Sort Works:**
1. Divide the array into sorted (left) and unsorted (right) parts
2. Find the minimum element in the unsorted part
3. Swap it with the first element of the unsorted part
4. Move the boundary between sorted and unsorted parts one element to the right
5. Repeat until the entire array is sorted

### **Visual Example:**
**Initial:** `[64, 25, 12, 22, 11]`  
**Pass 1:** `[11, 25, 12, 22, 64]` (min=11)  
**Pass 2:** `[11, 12, 25, 22, 64]` (min=12)  
**Pass 3:** `[11, 12, 22, 25, 64]` (min=22)  
**Pass 4:** `[11, 12, 22, 25, 64]` (already sorted)

---

## ⚡ Implementation Details

### **Code Structure:**
```cpp
vector<int> selectionSort(vector<int>& nums) {
    int n = nums.size();
    for(int i = 0; i < n-1; i++) {
        int mini = i;
        for(int j = i+1; j < n; j++) {
            if (nums[j] < nums[mini]) {
                mini = j;
            }
        }
        swap(nums[mini], nums[i]);
    }
    return nums;
}
```

### **Key Components:**
- **Outer loop:** Iterates through each position `i` (0 to n-2)
- **Inner loop:** Finds the minimum element in unsorted part (i+1 to n-1)
- **Minimum tracking:** `mini` index tracks the smallest element found
- **Single swap per pass:** Only one swap operation per outer loop iteration

---

## ⏱️ Complexity Analysis

### **Time Complexity:**
- **Best Case:** `O(n²)` - always performs complete comparisons
- **Average Case:** `O(n²)` - quadratic time complexity
- **Worst Case:** `O(n²)` - same for all cases

### **Space Complexity:** `O(1)`
- In-place sorting algorithm
- Only uses constant extra space for indices

---

## ✅ Algorithm Properties

| Property | Description |
|----------|-------------|
| **Stable** | ❌ Not stable (may change order of equal elements) |
| **In-place** | ✅ Uses constant extra space |
| **Adaptive** | ❌ Always performs O(n²) comparisons |
| **Comparison-based** | ✅ Uses comparisons to determine order |
| **Swap Efficiency** | ✅ Only O(n) swaps (better than Bubble Sort) |

---

## 🎯 Sample Input/Output

### **Input:**
```cpp
vector<int> nums = {64, 25, 12, 22, 11};
```

### **Execution:**
```
Original array: 64 25 12 22 11
Sorted array: 11 12 22 25 64
```

### **Step-by-step Process:**
1. **Pass 1:** Find min in [64,25,12,22,11] → min=11 at index 4 → swap with index 0
2. **Pass 2:** Find min in [25,12,22,64] → min=12 at index 2 → swap with index 1  
3. **Pass 3:** Find min in [25,22,64] → min=22 at index 3 → swap with index 2
4. **Pass 4:** Find min in [25,64] → min=25 at index 3 → swap with index 3

---

## 🔧 Algorithm Characteristics

### **Advantages:**
- Simple to understand and implement
- Memory efficient - O(1) space complexity
- Performance consistent across different inputs
- Minimal number of swaps (O(n) swaps)

### **Disadvantages:**
- Poor time complexity O(n²) for all cases
- Not stable (order of equal elements may change)
- Not adaptive (doesn't take advantage of existing order)

---

## 📊 Comparison with Other Sorts

| Algorithm | Time Complexity | Space Complexity | Stable | Swaps |
|-----------|----------------|------------------|--------|-------|
| **Selection Sort** | O(n²) | O(1) | ❌ | O(n) |
| **Bubble Sort** | O(n²) | O(1) | ✅ | O(n²) |
| **Insertion Sort** | O(n²) | O(1) | ✅ | O(n²) |

---

## 📝 Code Reference

[Solution Code](./selection_sort.cpp)


**Function:** `selectionSort(vector<int>& nums)`  
**Usage:** Call with integer vector to get sorted result

---