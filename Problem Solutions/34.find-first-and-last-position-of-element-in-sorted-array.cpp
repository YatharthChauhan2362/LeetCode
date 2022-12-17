/*
 * @lc app=leetcode id=34 lang=cpp
 *
 * [34] Find First and Last Position of Element in Sorted Array
 */

// @lc code=start
class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        const int l = lower_bound(begin(nums), end(nums), target) - begin(nums);

        if (l == nums.size() || nums[l] != target)
            return {-1, -1};

        const int r = upper_bound(begin(nums), end(nums), target) - begin(nums) - 1;

        return {l, r};
    }
};

// #include <vector>
// using namespace std;
// int firstOcc(vector<int> &arr, int n, int key)
// {

//     int s = 0, e = n - 1;
//     int mid = s + (e - s) / 2;
//     int ans = -1;
//     while (s <= e)
//     {

//         if (arr[mid] == key)
//         {
//             ans = mid;
//             e = mid - 1;
//         }
//         else if (key > arr[mid])
//         { // Right
//             s = mid + 1;
//         }
//         else if (key < arr[mid])
//         { // left
//             e = mid - 1;
//         }

//         mid = s + (e - s) / 2;
//     }
//     return ans;
// }

// int lastOcc(vector<int> &arr, int n, int key)
// {

//     int s = 0, e = n - 1;
//     int mid = s + (e - s) / 2;
//     int ans = -1;
//     while (s <= e)
//     {

//         if (arr[mid] == key)
//         {
//             ans = mid;
//             s = mid + 1;
//         }
//         else if (key > arr[mid])
//         { // Right me jao
//             s = mid + 1;
//         }
//         else if (key < arr[mid])
//         { // left me jao
//             e = mid - 1;
//         }

//         mid = s + (e - s) / 2;
//     }
//     return ans;
// }

// pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k)
// {
//     pair<int, int> p;
//     p.first = firstOcc(arr, n, k);
//     p.second = lastOcc(arr, n, k);

//     return p;
// }

// @lc code=end
