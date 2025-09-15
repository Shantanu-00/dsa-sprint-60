# 🚀 Maximum Subarray Sum (Kadane's Algorithm)

## 📌 Problem

Given an integer array `nums`, find the **contiguous subarray** (containing at least one number) which has the **largest sum**, and return that sum.

### 🧪 Example

```cpp
Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum = 6
```

---

## 💡 Intuition

To find the maximum sum of a contiguous subarray, we must decide at each index whether to:

1. **Extend the previous subarray** by including `nums[i]`, or  
2. **Start a new subarray** from `nums[i]` if the previous sum has become negative.

### 🔍 Key Idea

- A subarray with a **negative sum** will only reduce the total, so we discard it by resetting the sum.
- Kadane’s Algorithm ensures we always track the **maximum possible sum** ending at each index.

---

## 🔑 Approach (Kadane’s Algorithm)

1. Initialize two variables:  
   - `sum` to track the current subarray sum  
   - `maxi` to store the maximum sum found so far

2. Iterate through the array:
   - Add `nums[i]` to `sum`
   - If `sum` exceeds `maxi`, update `maxi`
   - If `sum` becomes negative, reset it to 0

---

## ⏱ Complexity

| Metric     | Value     |
|------------|-----------|
| **Time**   | `O(n)` – single pass through the array |
| **Space**  | `O(1)` – constant extra space |

---

## 🖨️ Printing the Subarray with Maximum Sum

To track the actual subarray, maintain:

- `start` → potential starting index of a new subarray  
- `array_start` and `array_end` → indices of the best subarray found so far

### 🧩 Sample Code Snippet

```cpp
int start = 0, array_start = 0, array_end = 0;
int sum = 0, maxi = INT_MIN;

for (int i = 0; i < nums.size(); i++) {
    if (sum == 0) start = i;
    sum += nums[i];

    if (sum > maxi) {
        maxi = sum;
        array_start = start;
        array_end = i;
    }

    if (sum < 0) sum = 0;
}
```

After the loop, the subarray `nums[array_start...array_end]` contains the maximum sum.

---

## 🏷️ Pattern Tags

- Dynamic Programming  
- Greedy  
- Array  
- Sliding Window (conceptual)  
- Interview Favorite  

---


