// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// An input string is valid if:

// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
// Every close bracket has a corresponding open bracket of the same type.

#include <iostream>
#include <stack>
#include <string>

using namespace std;

class Solution {
public:
    
    bool isMatching(char open, char close)
    {
        if((open=='(' && close==')') || (open=='{' && close=='}') || (open=='[' && close==']'))
            return true;
    return false;
    }
    bool isValid(string st) {
        stack<char> s;
        for(char ch : st)
        {
            if(ch =='(' || ch=='{' || ch=='[')
                s.push(ch);
            else
            {
                if(!s.empty() && isMatching(s.top(),ch))
                    s.pop();
                else
                    return  false;
            }
        }
        if(s.empty())
            return true;
        return false;
        
    }
};