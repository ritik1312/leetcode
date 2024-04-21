# Given a string s, find the length of the longest substring without repeating characters.

 

# Example 1:

# Input: s = "abcabcbb"
# Output: 3
# Explanation: The answer is "abc", with the length of 3.
# Example 2:

# Input: s = "bbbbb"
# Output: 1
# Explanation: The answer is "b", with the length of 1.

class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        last_index = {}
        l = r = 0
        max_len = 0
        for r in range(len(s)):
            ch = s[r]
            if ch in last_index and last_index[ch]>=l:
                l = last_index[ch]+1
            last_index[ch] = r
            
            if r-l+1 > max_len:
                max_len = r-l+1
        return max_len