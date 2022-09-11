/*
 * @lc app=leetcode id=1009 lang=cpp
 *
 * [1009] Complement of Base 10 Integer
 */

// @lc code=start
class Solution
{
public:
    int bitwiseComplement(int N)
    {
        int mask = 1;

        while (mask < N)
            mask = (mask << 1) + 1;

        return mask ^ N;
    }
};
// @lc code=end
