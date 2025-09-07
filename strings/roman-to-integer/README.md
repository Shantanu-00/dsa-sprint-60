# Roman Numeral to Integer – Subtractive Parsing

**Problem:**  
Convert a Roman numeral string `s` into its corresponding integer value.  
Example:  
`s = "MCMXCIV"` → `1994`

---

## Approach

- Roman numerals use **subtractive notation**: when a smaller numeral appears before a larger one, it is subtracted (e.g., `IV = 5 - 1 = 4`).
- Traverse the string from **left to right**.
- For each character:
  - Compare its value with the next character.
  - If the current value is **less than** the next, subtract it.
  - Otherwise, add it.
- Use a lookup function `check(char)` implemented via a `switch` statement for fast, memory-efficient mapping.

---

## Code Logic via switch statement

```cpp
class Solution {
public:
    int check(char a) {
        switch(a) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
    }

    int romanToInt(string s) {
        int res = 0;
        int n = s.length();
        for (int i = 0; i < n; i++) {
            if (i + 1 < n && check(s[i]) < check(s[i + 1])) {
                res -= check(s[i]);
            } else {
                res += check(s[i]);
            }
        }
        return res;
    }
};
```

---

## Complexity

- **Time:** O(n), where n = length of the input string  
- **Space:** O(1), constant space for lookup logic

---

## Key Insight

- The subtractive rule is the only nuance in Roman numeral parsing.
- Comparing each character with the next allows efficient handling in a single pass.
- Using a `switch`-based lookup avoids hash map overhead and enables compiler optimizations like inlining and jump tables.

---

## Pattern Tags

- String Parsing  
- Greedy Traversal  
- Lookup Optimization  
- Subtractive Logic

---

