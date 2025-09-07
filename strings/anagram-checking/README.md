Here’s a README file styled exactly like your KMP example, but for the **Anagram Check** problem using the optimal frequency-count approach in C++:

---

# Anagram Check – Frequency Count

**Problem:**  
Given two strings `s` and `t`, return `true` if `t` is an anagram of `s`, and `false` otherwise.  
Example 1: `s = "anagram"`, `t = "nagaram"` → `true`  
Example 2: `s = "rat"`, `t = "car"` → `false`

---

## Approach  
- An anagram must have the **same characters with the same frequency**.  
- Use a **fixed-size frequency array** of 26 elements (for lowercase English letters).  
- Traverse both strings simultaneously:  
  - Increment count for `s[i]`  
  - Decrement count for `t[i]`  
- After traversal, if all counts are zero, the strings are anagrams.

---

## Complexity  
- **Time:** O(n), where n = length of the strings  
- **Space:** O(1), fixed array of size 26  

---

## Key Insight  
- Instead of sorting or brute-force matching, use a frequency array to track character balance.  
- Incrementing and decrementing in one pass ensures linear time and constant space.  
- Works only for lowercase English letters — extendable for Unicode or mixed-case with maps.

---

---

## Pattern Tag  
- Hashing  
- Frequency Count  
- String Comparison  

---

