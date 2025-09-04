# KMP – String Rotation Check

**Problem:**  
Given two strings `s` and `goal`, return true if `goal` is a rotation of `s`.  
Example: `s = "abcde"`, `goal = "cdeab"` → true.  

---

## Approach
- Key trick: If `goal` is a rotation of `s`, then `goal` must be a substring of `s+s`.Double the main string by appending with itself  
- Use **KMP algorithm** (Knuth-Morris-Pratt) to search efficiently.  
- Build LPS (Longest Prefix Suffix) array for the `goal`.  
- Run substring search in `s+s` using LPS.  

---

## Complexity
- **Time:** O(n + m), where n = |s|, m = |goal|  
- **Space:** O(m) for LPS array  

---

## Key Insight
- Instead of brute force checking all rotations, doubling the string and applying KMP makes it linear.  
- Classic use-case of KMP beyond just substring search.  

---

## Pattern Tag
- String Matching  
- Prefix Function (LPS)  
