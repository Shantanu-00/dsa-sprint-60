# 📈 Progress Log

---

## ✅ Day 1 (2025-09-04)

**1. String Rotation using KMP**  
- **Problem:** String Rotation using KMP  
- **Folder:** [/strings/kmp-string-matching](./strings/kmp-string-matching)  
- **Insight:** Doubling the string + KMP → efficient rotation check in `O(n + m)` instead of standard `O(n^2)` via `find` or `substr` in C++.

---

**2. Maximum Subarray using Kadane's Algorithm**  
- **Problem:** Maximum Subarray using Kadane's Algorithm  
- **Folder:** [/arrays/kadanes-algorithm-max-subarray](./arrays/kadanes-algorithm-max-subarray)  
- **Insight:** Iterate through the array, maintain running sum, and update `max_sum_so_far`. If the sum drops below `0`, reset it to `0` — no point in considering a subarray if it reduces the answer.

---

## ✅ Day 2 (2025-09-07)

**1. Roman Numeral to Integer – Subtractive Parsing**  
- **Problem:** Roman numeral to integer conversion  
- **Folder:** [/strings/roman-to-integer](./strings/roman-to-integer)  
- **Insight:** Compare each numeral with the next → subtract if smaller, else add. Efficient `O(n)` with `switch` lookup.

---

**2. Anagram Check – Frequency Count**  
- **Problem:** Check if two strings are anagrams  
- **Folder:** [/strings/anagram-check](./strings/anagram-checking)  
- **Insight:** Use a fixed-size frequency array (26). Increment for `s`, decrement for `t`. If all zeros → anagram. `O(n)` time, `O(1)` space.

---

**3. Two Sum – Find Indices of Target Pair**  
- **Problem:** Find two indices whose elements sum to target  
- **Folder:** [/arrays/two-sum](./arrays/2-sum-problem)  
- **Insight:** Store `{value → index}` in hash map. For each number, check if `target - num` exists. `O(n)` solution with space-time tradeoff.

---

**4. Next Permutation of an Integer Array**  
- **Problem:** Rearrange to next lexicographic permutation  
- **Folder:** [/arrays/next-permutation](./arrays/next-permutation-int)  
- **Insight:** Find pivot, swap with next greater, then reverse suffix. `O(n)` time, `O(1)` space.

## ✅ Day 3 (2025-09-08)

**1. Implement Atoi**  
- **Problem:** String to integer 32 bit conversion with edge cases.
- **Folder:** [/strings/atoi](./strings/atoi) 
- **Insight:**Strip leading spaces → determine sign → convert digit chars to integers → accumulate using `ans = ans * 10 + digit` → check overflow → return `ans * sign`.


---

**2. Maximum Subarray using Kadane's Algorithm with printing the subarray**  
- **Problem:** Maximum Subarray using Kadane's Algorithm with print of the subarray 
- **Folder:** [/arrays/kadanes-algorithm-max-subarray](./arrays/kadanes-algorithm-max-subarray)  
- **Insight:** need 3 variable one `start` which resets to `i` whenever sum is set to zero and 2 `startarray` and `endarray` which you will update with start and end indexes whenever maximum is updated `startarray` with `start` and `endarray` with current `i` when max was being updated you can then output the array via these indexes.
