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

// The code is a function that takes in two vectors of integers and returns the sum of those two.

// The first vector is called "nums" and the second is called "target".

// The function starts by declaring an unordered_map<int, int> named numToIndex.

// This map will be used to keep track of which number goes with which index.

// Next, it iterates through each element in the list nums using for loops until it finds one where target - nums[i] equals 0 (the condition).

// If this happens, then it sets numToIndex[target - nums[i]] = i and continues on to the next iteration.

// Otherwise, if there are no more elements left in either list then it throws an exception because there's nothing else to do.

// The code is a solution to the following Leetcode problem: Two Sum The code above will return the index of the first number in nums that is greater than target.

// @lc code=end
