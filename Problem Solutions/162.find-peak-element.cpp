/*
 * @lc app=leetcode id=162 lang=cpp
 *
 * [162] Find Peak Element
 */

// @lc code=start
class Solution
{
public:
    int findPeakElement(vector<int> &arr)
    {
        int s = 0, e = arr.size() - 1;
        int mid = s + (e - s) / 2;
        while (s < e)
        {
            if (arr[mid] < arr[mid + 1])
                s = mid + 1;
            else
                e = mid;

            mid = s + (e - s) / 2;
        }
        return s;
    }
};
