class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> charMap;
        int left = 0;
        int result = 0 ;
     for (int right = 0; right < s.size(); right++) {
            char currentChar = s[right];
            if (charMap.find(currentChar) != charMap.end() && charMap[currentChar] >= left) {
                left = charMap[currentChar] + 1;
            }
            charMap[currentChar] = right;
            result = max(result, right - left + 1);
        }
        return result;
    }
};