/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int ans = 0;
        vector<int> count(128);

        for (int l = 0, r = 0; r < s.length(); ++r)
        {
            ++count[s[r]];
            while (count[s[r]] > 1)
                --count[s[l++]];
            ans = max(ans, r - l + 1);
        }

        return ans;
    }
};
// @lc code=end
