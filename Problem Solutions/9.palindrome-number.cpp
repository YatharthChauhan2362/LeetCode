/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
            return false;

        long reversed = 0;
        int y = x;

        while (y)
        {
            reversed = reversed * 10 + y % 10;
            y /= 10;
        }

        return reversed == x;
    }
};
// @lc code=end