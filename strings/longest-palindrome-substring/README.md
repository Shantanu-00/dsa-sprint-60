# 📌 Longest Palindromic Substring — Expand Around Center

## 🧠 Problem Statement  

Given a string, find the longest substring that reads the same forward and backward (a palindrome).

---

## 💡 Core Idea

Every palindrome has a center. Instead of checking all possible substrings (which takes O(n³) time in brute-force), we optimize by expanding outward from each center, reducing the complexity to O(n²). In this approach, each character in the string is treated as a potential center for two types of palindromes: odd-length (centered on a single character) and even-length (centered between two characters). This gives us a total of 2n - 1 possible centers for a string of length n. For each center, we expand outward as long as the characters on both sides match, effectively identifying palindromic substrings. During each expansion, we track the longest palindrome found so far by comparing its length to the current maximum. If a longer palindrome is discovered, we update our result accordingly. After evaluating all centers, we return the longest palindromic substring found.

---

## 🔍 How It Works

- A string of length `n` has `2n - 1` possible centers:
  - `n` single-character centers → for odd-length palindromes
  - `n - 1` between-character centers → for even-length palindromes

- For each center, we expand outward as long as the characters on both sides match.

- While expanding, we track the longest palindrome found so far.

---

## 🧪 Examples

- `"babad"` → longest palindrome is `"bab"` or `"aba"`
- `"cbbd"` → longest palindrome is `"bb"`
- `"a"` → returns `"a"`
- `"aaaa"` → returns `"aaaa"`

---

## 📏 Why We Use `right - left + 1`  
This gives the actual number of characters in the palindrome, since both ends are included.

---

## ✅ Advantages

- **Time Complexity**: O(n²)  
- **Space Complexity**: O(1)  
- No extra memory or complex data structures needed

---

## 📚 Summary  
This method is based on symmetry. By expanding around each possible center, we efficiently find the longest palindromic substring without checking every combination. It’s clean, fast, and perfect for interviews.

---

## code for brute force with somewhat optimized calls 
```class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        string ans=s.substr(0,1);
        if(n<=1) return s;
        auto check=[&](int l , int r){
            while(l<r){
                if(s[l]!=s[r])return false;
                l++;
                r--;
    
            }
            return true;
        };
    for(int i =0; i<n;i++){
        for(int j =i;j<n;j++){
            if(check(i,j)&&(j-i+1>ans.size())){
                ans=s.substr(i,j);
            }
        }
    }
    return ans;
    }
}; ```