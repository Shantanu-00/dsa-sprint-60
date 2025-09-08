# Atoi – String to Integer Conversion

**Problem:**  
Convert a string `s` to a 32-bit signed integer (`int`) following rules similar to the C/C++ `atoi` function.  
Examples:  
- `"42"` → `42`  
- `"   -042"` → `-42`  
- `"words and 987"` → `0`  

---

## Approach  
- Skip leading whitespace characters.  
- Check for an optional `'+'` or `'-'` to determine the sign.  
- Parse consecutive digits and build the number incrementally.  
- Clamp the result to the 32-bit signed integer range: `[-2³¹, 2³¹ - 1]`.  
- Stop parsing when a non-digit character is encountered.  

---

## Complexity  
- **Time:** O(n), where n = |s|  
- **Space:** O(1) for iterative version, O(n) stack depth for recursive version  

---

## Key Insight  
- Instead of converting characters blindly, subtract `'0'` to get numeric values.  digit-'0' this is used for converting character literal to integer important as cpp do not have same working logic for '' char literal and "" string literal both are different we add ans via this ans= ans*10 + digit;
- Use preemptive overflow checks before multiplying to avoid exceeding integer bounds. check is this (INT_MAX<digit - '0')/10 
- Recursive version offers modular clarity, while iterative version ensures stack safety.  

---

## Pattern Tag  
- String Parsing  
- Integer Conversion  
- Overflow Handling  
- Control Flow & Edge Case Management
