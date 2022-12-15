/*
 * @lc app=leetcode id=287 lang=cpp
 *
 * [287] Find the Duplicate Number
 */

// @lc code=start
// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {

//     }
// };
class Solution
{
public:
    int findDuplicate(vector<int> &array)
    {
        int ans = 0;
        {

            for (int i = 0; i < array.size(); i++)
                ans = ans ^ array[i];
        }

        for (int i = 1; i < array.size(); i++)
        {
            ans = ans ^ i;
        }
        return ans;
    }
};

// @lc code=end
