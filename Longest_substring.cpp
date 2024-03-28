// Given a string s, find the length of the longest substring without repeating characters.

// Example 1:

// Input: s = "abcabcbb"
// Output: 3
// Explanation: The answer is "abc", with the length of 3.

#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int index[256] = {-1};
        int n=s.length();
        
        int max_len=0;
        int i,j;
        i=j=0;
        while(j<n)
        {
            if(index[s[j]]>=i)
            {
                i=index[s[j]]+1;
            }
            index[s[j]]=j;
            if((j-i+1) > max_len)
                max_len = j-i+1;
            j++;
        }
        return max_len;
    }
};