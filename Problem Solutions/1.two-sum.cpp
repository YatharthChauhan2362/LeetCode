/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> numToIndex;

        for (int i = 0; i < nums.size(); ++i)
        {
            if (numToIndex.count(target - nums[i]))
                return {numToIndex[target - nums[i]], i};
            numToIndex[nums[i]] = i;
        }

        throw;
    }
};
// @lc code=end
