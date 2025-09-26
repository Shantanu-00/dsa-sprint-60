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

## ✅ Day 10 (2025-09-16)

**1. Palindrome Linked List**

* **Problem:** Check if a singly linked list is a palindrome.
* **Folder:** [/linked-list/linked-list-palindrome](./linked-list/check-palindrome)
* **Insight:** Split the list using fast/slow pointers, reverse the second half, and compare node by node. Don’t forget to restore the list at the end to maintain structure. Learned importance of handling odd/even lengths separately.

**2. Remove N-th Node from End**

* **Problem:** Remove the n-th node from the end of a linked list in one pass.
* **Folder:** [/linked-list/remove-nth-node-end](./linked-list/delete-n-from-last)
* **Insight:** Used two-pointer gap technique (fast pointer moves n steps ahead). Edge case: deleting the head when `n == length`. Managed memory safety with explicit `delete`.

**3. Delete Middle Node**

* **Problem:** Delete the middle node of a linked list.
* **Folder:** [/linked-list/delete-middle](./linked-list/delete-middle)
* **Insight:** Used fast/slow pointers to locate middle. For even length, deletes the second middle. Key lesson: always check single-node/empty list separately.

---

## ✅ Day 11 (2025-09-17)

**1. Sort Linked List (Merge Sort on Linked List)**

* **Problem:** Sort a singly linked list in `O(n log n)` time using constant space.
* **Folder:** [/linked-list/sort-list](./linked-list/merge-sort)
* **Insight:** Implemented **merge sort** with `mid()` for splitting and `mergeSort()` for merging. Learned that linked list merge sort avoids extra space unlike arrays.

**2. Odd-Even Linked List**

* **Problem:** Rearrange linked list nodes so that all odd-indexed nodes come before even-indexed nodes.
* **Folder:** [/linked-list/odd-even-list](./linked-list/odd-even-seperation)
* **Insight:** Used **two-pointer separation** (`odd` & `even`) with careful handling of `evenHead`. Ensured stable in-place reordering with `O(1)` extra space.

---

## ✅ Day 12 (2025-09-18)

**1. Plus One in Linked List**

* **Problem:** Given a non-empty linked list representing a non-negative integer, add one to it and return the resulting list.
* **Folder:** [/linked-list/add-1-to-linked-list](./linked-list/add-1-to-linked-list)
* **Insight:** Solved with **recursive carry propagation** from the tail. Learned how recursion naturally handles the last node first. Added a dummy node when a final carry remained (e.g., 999 → 1000).

**2. Intersection of Two Linked Lists**

* **Problem:** Return the node at which two linked lists intersect, or `nullptr` if they don’t.
* **Folder:** [/linked-list/intersection-point](./linked-list/intersection-point)
* **Insight:** Applied the **two-pointer switching trick**: traverse both lists, and when a pointer reaches the end, switch it to the other head. Guarantees meeting at intersection or at `nullptr`. Elegant `O(m+n)` time and `O(1)` space.

---

## ✅ Day 13 (2025-09-19)

**1. Add Two Numbers**

* **Problem:** Given two non-empty linked lists representing two non-negative integers (digits stored in reverse order), add the two numbers and return the sum as a linked list.
* **Folder:** [/linked-list/add-two-numbers](./linked-list/add-two-numbers)
* **Insight:** Implemented **digit-by-digit addition with carry propagation**. Used a dummy node technique to simplify list construction. Learned to handle lists of different lengths seamlessly and properly manage final carry cases (e.g., 999 + 1 = 1000). Key was processing while either list has nodes remaining.

**2. Reverse Nodes in k-Group**

* **Problem:** Reverse linked list nodes in groups of k. If remaining nodes < k, leave them as-is.
* **Folder:** [/linked-list/reverse-k-group](./linked-list/reverse-k-group)
* **Insight:** Applied **group-wise reversal with pointer management**. Used recursive reversal for clarity and a helper function to find k-th nodes. Learned careful pointer updating to maintain list connectivity between reversed groups. Crucial insight was setting `kthNode->next = nullptr` to properly separate groups before reversal.

---
## ✅ Day 14 (2025-09-20)

**1. Flatten Multilevel Linked List**

* **Problem:** Flatten a multilevel doubly linked list into a single-level sorted list.
* **Folder:** [/linked-list/flatten-multilevel](./linked-list/flatten-multilevel)
* **Insight:** Applied **recursive merge sort approach** to handle nested structures. Learned to treat horizontal and vertical lists as separate sorted lists to merge. Key was using the `child` pointer for vertical traversal and carefully setting `next` pointers to `nullptr` to maintain flattened structure. The merge operation naturally maintained sorted order.

**2. Rotate Linked List**

* **Problem:** Rotate a linked list to the right by k places.
* **Folder:** [/linked-list/rotate-list](./linked-list/rotate-list)
* **Insight:** Used **circular list technique** for efficient rotation. Learned to calculate effective rotations using `k % length` to handle large k values. The key insight was making the list circular temporarily, then breaking it at the new tail position (`length - k`). This approach avoided multiple rotations and worked in single pass.

**3. Copy List with Random Pointer**

* **Problem:** Create a deep copy of a linked list where each node has an additional random pointer.
* **Folder:** [/linked-list/copy-random-list](./linked-list/copy-random-list)
* **Insight:** Implemented the elegant **three-pass interweaving technique**. Learned that inserting copy nodes between originals creates natural mapping without hash tables. The crucial insight was `copy->random = original->random->next` for random pointer assignment. The separation pass efficiently restored both original and copy lists.

---
## ✅ Day 15 (2025-09-21)

**1. Bubble Sort Algorithm**

* **Problem:** Implement the bubble sort algorithm to sort an array of integers in ascending order.
* **Folder:** [/sorting/bubble-sort](./sorting/bubble-sort)
* **Insight:** Learned the **adjacent comparison and swapping** technique where larger elements "bubble up" to their correct positions. Key understanding was reducing the inner loop range after each pass since the largest elements get placed correctly. The algorithm naturally stops when no swaps occur in a complete pass.

**2. Selection Sort Algorithm**

* **Problem:** Implement the selection sort algorithm to sort an array using minimum element selection.
* **Folder:** [/sorting/selection-sort](./sorting/selection-sort)
* **Insight:** Applied the **divide and conquer approach** by maintaining sorted and unsorted portions. The crucial insight was finding the minimum element in the unsorted portion and swapping it with the first unsorted element. Learned that selection sort performs O(n) swaps but always requires O(n²) comparisons regardless of input order.

---








