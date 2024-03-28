/* Q. Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
*/

#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        int n=nums.size();
        
        int index;
        vector<int> res;
        for(int i=0;i<n;i++)
        {
            auto itr=m.find(target-nums[i]);
            if(itr!=m.end())
            {
                res.push_back(itr->second);
                res.push_back(i);
                break;
            }
            m[nums[i]]=i;
        }
        return res;
    }
};
