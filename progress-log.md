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
- **Folder:** [/arrays/kadanes-algorithm-max-subarray](./arrays/Kadane's-algorithm-max-subarray)  
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
- **Insight:** Strip leading spaces → determine sign → convert digit chars to integers → accumulate using `ans = ans * 10 + digit` → check overflow → return `ans * sign`.


---

**2. Maximum Subarray using Kadane's Algorithm with printing the subarray**  
- **Problem:** Maximum Subarray using Kadane's Algorithm with print of the subarray 
- **Folder:** [/arrays/kadanes-algorithm-max-subarray](./arrays/kadanes-algorithm-max-subarray)  
- **Insight:** need 3 variable one `start` which resets to `i` whenever sum is set to zero and 2 `startarray` and `endarray` which you will update with start and end indexes whenever maximum is updated `startarray` with `start` and `endarray` with current `i` when max was being updated you can then output the array via these indexes.



---

## ✅ Day 4 (2025-09-10)

**1. Best Time to Buy and Sell Stock**  
- **Problem:** Find the maximum profit from a single buy-sell transaction given daily stock prices.  
- **Folder:** [/arrays/buy-sell-stock](./arrays/stock-buy-sell)  
- **Insight:** Track the minimum price seen so far (`mini`) and compute potential profit at each step using `price - mini`. Update the maximum profit whenever a better opportunity is found. This greedy approach runs in O(n) time and uses constant space.

---

**2. Longest Palindromic Substring (Expand Around Center)**  
- **Problem:** Return the longest substring in a given string that is a palindrome.  
- **Folder:** [/strings/longest-palindromic-substring](./strings/longest-palindrome-substring)  
- **Insight:** Instead of checking all substrings (O(n³)), expand outward from each character and each gap between characters—covering both odd and even-length palindromes. There are `2n - 1` centers in total. For each center, expand while characters match and update the longest palindrome found so far. This reduces the time complexity to O(n²) with no extra space.

---

## ✅ Day 5 (2025-09-11)

**1. Frequency Sort – Bucket-Based Character Reordering**  
- **Problem:** Reorder characters in a string by descending frequency.  
- **Folder:** [/strings/frequency-sort](./strings/sort-characters-by-frequency)  
- **Insight:** Count character frequencies using a hash map, then place characters into buckets indexed by frequency. Traverse buckets from high to low, appending characters to construct the result. Runs in O(n) time by leveraging the bounded frequency range.

---

**2. Majority Element – Boyer-Moore Voting Algorithm**  
- **Problem:** Find the element that appears more than ⌊n / 2⌋ times in an array.  
- **Folder:** [/arrays/majority-element](./arrays/majority-element-half)  
- **Insight:** Maintain a `count` and a `candidate`. Reset candidate when `count` is 0, increment if the same element is found, otherwise decrement. By cancellation, the majority element always survives. O(n) time, O(1) space.

---

## ✅ Day 6 (2025-09-12)

**1. Reverse Words in a String**  
- **Problem:** Reverse the order of words in a string, ensuring only a single space between words and no leading/trailing spaces.  
- **Folder:** [/strings/reverse-words](./strings/reverse-words)  
- **Insight:** Traverse the string backwards, skip spaces, extract words, and append them to the result with single spaces. This avoids extra reversing steps and ensures correct formatting. O(n) time, O(n) space.

---

**2. Rotate Image (90 Degrees Clockwise)**  
- **Problem:** Rotate an `n x n` matrix by 90 degrees in place.  
- **Folder:** [/matrix/rotate-image](./matrix/rotate-matrix-90deg)  
- **Insight:** Use the two-step trick — transpose the matrix (swap across diagonal) and then reverse each row. This achieves in-place rotation without extra space. O(n²) time, O(1) space.

## ✅ Day 7 (2025-09-13)

**1. Linked List Basics – Creation, Insertion & Deletion Utilities**  
- **Problem:** Implement a singly linked list with operations for creation, traversal, insertion (head, tail, k-th), and deletion (head, tail, k-th).  
- **Folder:** [/linked-list/linked-list-basics](./linked-list/linked-list-basics)  
- **Insight:** Learned the importance of memory management (`new` / `delete`), safe pointer handling, and constructor initializer lists. Fixed common pitfalls like missing `temp = temp->next`, unsafe `nullptr` dereferences, and incorrect returns wiping the list. Final version is modular, memory-safe, and interview-ready.  

---
# ✅ Day 8 (2025-09-14)

**1. Reverse Linked List (Recursive)**

* **Problem:** Reverse a singly linked list using recursion.
* **Folder:** [/linked-list/reverse-linked-list-recursive](./linked-list/reverse-linked-list-recursive)
* **Insight:** Base case when `head == nullptr` or `head->next == nullptr`. Recursively reverse rest, then adjust pointers (`front->next = head; head->next = nullptr`). Clean recursive elegance with O(n) time and O(n) stack space.

---

**2. Reverse Linked List (Iterative)**

* **Problem:** Reverse a singly linked list iteratively.
* **Folder:** [/linked-list/reverse-linked-list-iterative](./linked-list/reverse-linked-list-iterative)
* **Insight:** Use three pointers (`prev`, `head`, `temp`). Iteratively reverse direction of links until `head` reaches null. O(n) time, O(1) space.

---

**3. Find Middle of Linked List**

* **Problem:** Return middle node of singly linked list.
* **Folder:** [/linked-list/find-middle](./linked-list/find-middle)
* **Insight:** Use two pointers (`slow`, `fast`). `slow` moves 1 step, `fast` moves 2 steps. When `fast` reaches end, `slow` is at middle. O(n) time, O(1) space.

---

**4. Merge Overlapping Intervals**

* **Problem:** Merge all overlapping intervals in array.
* **Folder:** [/arrays/merge-overlapping-intervals](./arrays/merge-overlapping-intervals)
* **Insight:** Sort intervals. Traverse, if overlap with last inserted → merge by updating end. Else push as new interval. Efficient O(n log n).

---

**5. Maximum Product Subarray**

* **Problem:** Find contiguous subarray with largest product.
* **Folder:** [/arrays/maximum-product-subarray](./arrays/maximum-product-subarray)
* **Insight:** Track prefix and suffix products. Reset on zero. Keep max across traversal. Handles negatives naturally. O(n) time, O(1) space.

---
## ✅ Day 9 (2025-09-15)

**1. Linked List Cycle Detection (Floyd’s Algorithm)**

* **Problem:** Detect if a singly linked list has a cycle using fast & slow pointers.
* **Folder:** [/linked-list/linked-list-cycle-detect](./linked-list/loop-detect)
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






