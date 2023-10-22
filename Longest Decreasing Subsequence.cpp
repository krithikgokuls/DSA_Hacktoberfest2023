#include <iostream>
#include <vector>
#include <climits>
using namespace std;
 
// Function to find the length of the longest decreasing subsequence
int LDS(vector<int> const &nums, int i, int prev)
{
    // Base case: nothing is remaining
    if (i == nums.size()) {
        return 0;
    }
 
    // case 1: exclude the current element and process the
    // remaining elements
    int excl = LDS(nums, i + 1, prev);
 
    // case 2: include the current element if it is smaller
    // than the previous element in LDS
    int incl = 0;
    if (nums[i] < prev) {
        incl = 1 + LDS(nums, i + 1, nums[i]);
    }
 
    // return the maximum of the above two choices
    return max(incl, excl);
}
 
int main()
{
    vector<int> nums = { 0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15 };
 
    cout << "The length of the LDS is " << LDS(nums, 0, INT_MAX);
 
    return 0;
}
