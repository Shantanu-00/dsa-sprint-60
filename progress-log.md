# 📈 Progress Log

---

## ✅ Day 1 (2025-09-04)

**1. String Rotation using KMP**  
- **Problem:** String Rotation using KMP  
- **Folder:** [/strings/kmp-string-matching](./strings/kmp-string-matching)  
- **Insight:** Doubling the string + KMP → efficient rotation check in `O(n + m)` instead of standard `O(n^2)` via `find` or `substr` in C++.

---

**2. Maximum Subarray using Kadane's Algorithm**  
- **Problem:** Maximum Subarray using Kadane's algorithm  
- **Folder:** [/strings/kmp-string-matching](./arrays/Kadane's-algorithm-max-subarray/)  
- **Insight:** Iterate through the array, maintain running sum, and update `max_sum_so_far`. If the sum drops below `0`, reset it to `0` — no point in considering a subarray if it reduces the answer.
