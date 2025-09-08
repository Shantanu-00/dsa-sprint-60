class Solution {
public:
    int myAtoi(string s) {
        int i = 0, n = s.size();
        // Skip leading whitespaces
        while (i < n && s[i] == ' ') i++;

        // Handle optional sign
        int sign = 1;
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        int ans = 0;
        while (i < n && isdigit(s[i])) {
            int digit = s[i] - '0';

            // Check for overflow before multiplying
            if (ans > (INT_MAX - digit) / 10) {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }

            ans = ans * 10 + digit;
            i++;
        }

        return ans * sign;
    }
};