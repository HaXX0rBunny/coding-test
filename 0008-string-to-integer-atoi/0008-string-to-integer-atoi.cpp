class Solution {
public:
    int myAtoi(string s) {
        int n =  s.size();
        int i = 0;
        for(; i < n&&s[i] ==' '  ; i++);
        int sign= 1;
            if (i < n && (s[i] == '-' || s[i] == '+')) {
            if (s[i] == '-') sign = -1;
            i++;
        }
        long long result = 0;
     while (i < n && isdigit(s[i])) {
            int digit = s[i] - '0';
            
            // Check BEFORE potential overflow
            if (result > (INT_MAX - digit) / 10) { 
                return (sign == 1) ? INT_MAX : INT_MIN;
            }
            
            result = result * 10 + digit; // Update result
            i++;
        }
        
        return static_cast<int>(result * sign);
};