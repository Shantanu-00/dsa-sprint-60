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
  - Kadane’s Algorithm – Maximum Subarray Sum ([code](./arrays/kadane's-algorithm-max-subarray/solution.cpp))  
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

## ✅ Day 6 (2025-09-12)

**1. Reverse Words in a String**  
- **Problem:** Reverse the order of words in a string. Ensure only a single space between words, and remove leading/trailing spaces.  
- **Folder:** [/strings/reverse-words](./strings/reverse-words)  
- **Insight:** Start from the end of the string, skip spaces, identify each word, and build the result string. Appending words as you go ensures reversed order. This avoids extra reversing and trims unnecessary spaces. Runs in O(n) time with O(n) space.

---

**2. Rotate Image (90 Degrees Clockwise)**  
- **Problem:** Rotate an `n x n` matrix by 90 degrees clockwise in place.  
- **Folder:** [/matrix/rotate-image](./matrix/rotate-matrix-90deg)  
- **Insight:** First **transpose** the matrix (swap across the main diagonal), then **reverse each row**. This two-step trick achieves the rotation in place without allocating extra space. Runs in O(n²) time and O(1) space.
