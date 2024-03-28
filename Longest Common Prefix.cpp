// Write a function to find the longest common prefix string amongst an array of strings.

// If there is no common prefix, return an empty string "".

// Example 1:

// Input: strs = ["flower","flow","flight"]
// Output: "fl"

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int minl = 201;
        for(string s:strs)
        {
            if(s.length() < minl)
                minl = s.length();
        }
        string prefix = "";
        int flag = 0;
        for(int i=0;i<minl;i++)
        {
            for(int j=1;j<strs.size();j++)
            {
                if(strs[j][i] != strs[j-1][i])
                {
                    flag=1;break;
                }
            }
            if(flag)
                break;
            prefix+=strs[0][i];
        }
        return prefix;
    }
};