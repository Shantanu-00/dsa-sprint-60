# Frequency Sort – Bucket-Based Character Reordering

## Problem
Given a string `s`, return a new string where characters are sorted in **descending order of frequency**.  

**Example:**  

Input: s = "tree"
Output: "eert" or "eetr"  // both are valid

---

## Approach

1. **Count Frequency**

   * Use a hash map (or `unordered_map`) to count the frequency of each character in the string.

2. **Bucket Sort**

   * Create a vector of buckets indexed by frequency.
   * Each bucket holds characters that appear with that frequency.

3. **Fill Buckets**

   * For each character-frequency pair in the map:

     * Place the character into the bucket corresponding to its frequency.
     * Repeat the character as many times as it occurs.

4. **Construct Result**

   * Traverse the buckets from **high frequency to low frequency**.
   * Append characters to the result string accordingly.

---

## Complexity Analysis

* **Time Complexity:** O(n), where n = |s|
* **Space Complexity:** O(n), for storing the frequency map and buckets

> **Key Insight:**
- Instead of sorting character-frequency pairs (O(k log k)), bucket sort leverages the bounded frequency range (1 to n) for linear performance.

---

## Example Walkthrough

For `s = "tree"`:

1. Frequency Map: `{t:1, r:1, e:2}`
2. Buckets (indexed by frequency):

   ```text
   bucket[1] = [t, r]
   bucket[2] = [e]
   ```
3. Traverse buckets in reverse:

   * Start from bucket\[2]: add "ee"
   * Then bucket\[1]: add "t", "r"
4. Result: `"eetr"` or `"eert"`

---

## Pattern Tags

* Hash Map
* Bucket Sort
* Frequency Counting
* Greedy String Construction

---

## Notes

* This method is optimal for **strings with large lengths**, as it avoids costly sorting of character-frequency pairs.
* Bucket sort ensures linear-time construction of the result string.

