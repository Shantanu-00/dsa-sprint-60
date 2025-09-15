# DSA Sprint 60

🚀 60-day sprint to master Striver’s SDE Sheet.  
Goal: Solve minimum 2 problems/day + extract insights and patterns.  

---

## Structure
- **Topic-wise folders:** arrays, strings, dp, graphs, etc.  
- **Each problem:** code (`solution.cpp`) + short README (approach, complexity, insights).  
- **Progress tracking:** [progress-log.md](./progress-log.md)  
- **Notes folder:** common patterns (sliding window, prefix sum, binary search on answer, etc.)  

---

## Progress
---
- ✅ **Day 1**:  
  - String Rotation using KMP ([code](./strings/kmp-string-matching/solution.cpp))  
  - Kadane’s Algorithm – Maximum Subarray Sum ([code](./arrays/Kadane's-algorithm-max-subarray/solution.cpp))  
---
- ✅ **Day 2**:  
  - Roman Numeral to Integer – Subtractive Parsing ([code](./strings/roman-to-integer/solution.cpp))  
  - Anagram Check – Frequency Count ([code](./strings/anagram-checking/solution.cpp))  
  - Two Sum – Find Indices of Target Pair ([code](./arrays/2-sum-problem/solution.cpp))  
  - Next Permutation of an Integer Array ([code](./arrays/next-permutation-int/solution.cpp))  
---
- ✅ **Day 3**:  
  - Implement Atoi ([code](./strings/atoi/solution.cpp))  
  - Kadane’s Algorithm – Maximum Subarray Sum with print of the Subarray([code](./arrays/kadane's-algorithm-max-subarray/solution.cpp),[README file](./arrays/kadane's-algorithm-max-subarray/README.md))  

---

- ✅ **Day 4**:  
  - Best Time to Buy and Sell Stock ([code](./arrays/stock-buy-sell/solution.cpp))  
  - Longest Palindromic Substring – Expand Around Center ([code](./strings/longest-palindrome-substring/solution.cpp))
---

- ✅ **Day 5**:  
  - Frequency Sort – Bucket-Based Character Reordering  
    ([code](./strings/sort-characters-by-frequency/solution.cpp))  
  - Majority Element – Boyer-Moore Voting Algorithm  
    ([code](./arrays/majority-element-half/solution.cpp))  
---

- ✅ **Day 6**:  
  - Reverse Words in a String  
    ([code](./strings/reverse-words/solution.cpp))  
  - Rotate Matrix(Image) – 90 Degrees Clockwise  
    ([code](./matrix/rotate-matrix-90deg/solution.cpp))  
---

- ✅ **Day 7**:  
  - Linked List Basics – Creation, Insertion & Deletion Utilities  
    ([code](./linked-list/linked-list-basics/solution.cpp))  
---
- ✅ **Day 8**:  
  - Reverse Linked List – Recursive Approach  
    ([code](./linked-list/linked-list-reversal-recursive/solution.cpp))  
  - Reverse Linked List – Iterative Approach  
    ([code](./linked-list/linked-list-reversal-iterative/solution.cpp))  
  - Find Middle of Linked List – Fast & Slow Pointer  
    ([code](./linked-list/find-middle/solution.cpp))  
  - Merge Overlapping Intervals – Optimized Greedy  
    ([code](./arrays/merge-overlapping-intervals/solution.cpp))  
  - Maximum Product Subarray – Prefix & Suffix Scan  
    ([code](./arrays/maximum-product-subarray/solution.cpp))  
---


## ✅ Day 9 (2025-09-15)

**1. Linked List Cycle Detection (Floyd’s Algorithm)**

* **Problem:** Detect if a singly linked list has a cycle using fast & slow pointers.
* **Folder:** [/linked-list/loop-detection](./linked-list/loop-detection)
* **Insight:** Learned to always check `fast != NULL && fast->next != NULL` to avoid runtime errors. Proved that if a cycle exists, slow & fast will definitely meet.

**2. Linked List Cycle Start (Floyd’s + Reset Trick)**

* **Problem:** Find the node where the cycle begins.
* **Folder:** [/linked-list/linked-list-cycle-start](./linked-list/loop-start)
* **Insight:** After meeting inside the cycle, resetting one pointer to `head` and moving both one step guarantees intersection at the cycle start.

**3. Linked List Cycle Length**

* **Problem:** Find the length of the loop in a linked list.
* **Folder:** [/linked-list/linked-list-cycle-length](./linked-list/length-of-loop)
* **Insight:** After detecting the cycle, keeping one pointer fixed and moving the other until it returns gives the exact cycle length. Strengthened understanding of how Floyd’s algorithm works internally.

---


