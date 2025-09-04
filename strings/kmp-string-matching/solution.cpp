// Problem: Check if one string is a rotation of another using KMP
// Source: LeetCode (https://leetcode.com/problems/rotate-string/description/)
// Approach: Concatenate string s+s, use KMP to search goal inside it.
// Author: Shantanu (github.com/Shantanu-00)
// Date: 2025-09-04
// Complexity: O(n + m) time, O(m) space

class Solution {
public:
    void lpsfinder(vector<int>& lps, string s) {
        int pre = 0;
        int suf = 1;
        int n = s.size();
        while (suf < n) {
            if (s[pre] == s[suf]) {
                lps[suf] = pre + 1;
                pre++;
                suf++;
            } else {
                if (pre == 0) {
                    lps[suf] = 0;
                    suf++;
                } else {
                    pre = lps[suf - 1]; // can also do pre-1 in some variants
                }
            }
        }
    }

    bool rotateString(string s, string goal) {
        string doublestring = s + s;
        int n = goal.size();
        vector<int> lps(n, 0);
        lpsfinder(lps, goal);
        int first = 0, second = 0;
        while (first < doublestring.size() && second < n) {
            if (doublestring[first] == goal[second]) {
                first++;
                second++;
            } else {
                if (second == 0) {
                    first++;
                } else {
                    second = lps[second - 1];
                }
            }
        }
        return (second == n);
    }
};
