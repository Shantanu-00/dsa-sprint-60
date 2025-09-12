# Reverse Words in a String

## Problem Statement
Given an input string `s`, reverse the order of the words.  

- A word is defined as a sequence of non-space characters.  
- Words in `s` are separated by at least one space.  
- The returned string should contain **exactly one space** between words.  
- No leading or trailing spaces should be included.  

---

## Examples

**Example 1**

Input: s = "the sky is blue"
Output: "blue is sky the"


**Example 2**


Input: s = "  hello world  "
Output: "world hello"
Explanation: The reversed string should not contain leading or trailing spaces.


**Example 3**

Input: s = "a good   example"
Output: "example good a"
Explanation: Multiple spaces between words should be reduced to a single space.


---

## Approach

1. **Skip Spaces:**
   Start from the end of the string and skip trailing spaces.

2. **Extract Words Backwards:**

   * Mark the end of a word.
   * Continue moving left until a space is encountered.
   * Extract the substring as a word.

3. **Build Result:**

   * Append each word to the result string.
   * Add a space only between words (avoid trailing space).

4. **Return Result:**
   Final result contains reversed words separated by single spaces.


---

## Complexity Analysis

* **Time Complexity:** O(n)

  * Each character is processed once when traversing and extracting words.
* **Space Complexity:** O(n)

  * Extra space used to store the output string and temporary words.

---

## Key Insight

* Processing from **end to start** avoids extra reversing steps.
* Carefully managing spaces ensures the result has no leading, trailing, or multiple spaces between words.

---

## Pattern Tags

* String Manipulation
* Two Pointers
* Parsing
* Greedy Construction


