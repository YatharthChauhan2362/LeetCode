/*
 * @lc app=leetcode id=231 lang=cpp
 *
 * [231] Power of Two
 */

// @lc code=start
class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        int ans = 1;
        for (int i = 0; i <= 30; i++)

        {
            if (ans == n)
            {
                return true;
            }
            if (ans < INT_MAX / 2)
                ans = ans * 2;
        }
        return false;

        // for (int i = 0; i <= 30; i++)
        //     int ans = pow(2 * i);
        // {
        //     if (ans == n)
        //     {
        //         return true;
        //     }
        // }
        // return false;
    }
};
// @lc code=end
