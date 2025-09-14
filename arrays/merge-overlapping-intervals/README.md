# 🧩 Merge Overlapping Intervals

## 📌 Problem Statement

You are given an array of intervals `intervals`, where `intervals[i] = [start, end]`.
Merge all **overlapping intervals** and return the resulting array of non-overlapping intervals that cover all the input intervals.

---

## 🔍 Example

**Example 1:**

```
Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlap, merge them into [1,6].
```

**Example 2:**

```
Input: intervals = [[1,4],[4,5]]
Output: [[1,5]]
Explanation: Intervals [1,4] and [4,5] are considered overlapping.
```

---

## 🚀 Algorithm / Intuition

### ✅ Optimal Approach

We can merge overlapping intervals using a **single traversal** after sorting.

1. **Sort Intervals:**
   Sort the intervals by their start times. This ensures that overlapping intervals will appear next to each other.

2. **Initialize Answer List:**
   Add the first interval to the result list.

3. **Traverse and Merge:**
   For each new interval:

   * **Case 1:** If it overlaps with the last interval in the result list (`current.start <= last.end`), merge them by updating the end of the last interval as:

     ```
     last.end = max(last.end, current.end)
     ```
   * **Case 2:** Otherwise, if it does not overlap, simply add it to the result list.

4. **Return Answer List:**
   After traversing all intervals, the result contains merged non-overlapping intervals.

---

## 🧠 Dry Run

Input:

```
intervals = [[1,3],[2,6],[8,10],[15,18]]
```

* After sorting → `[[1,3],[2,6],[8,10],[15,18]]`
* Start with `[1,3]` in result.
* Compare `[2,6]` with `[1,3]`: Overlaps → merge to `[1,6]`.
* Compare `[8,10]` with `[1,6]`: No overlap → add `[8,10]`.
* Compare `[15,18]` with `[8,10]`: No overlap → add `[15,18]`.

Final Result → `[[1,6],[8,10],[15,18]]`

---

## ⏱ Complexity Analysis

* **Time Complexity:** O(n log n) → sorting takes O(n log n), traversal O(n).
* **Space Complexity:** O(n) → result list to store merged intervals.

---

## ⚡ Key Insights

* Sorting guarantees adjacent overlapping intervals.
* Single traversal ensures **O(n)** merging after sort.
* Works efficiently even for large input sizes.

---

## 🏷 Pattern Tag

* Intervals
* Greedy
* Sorting


