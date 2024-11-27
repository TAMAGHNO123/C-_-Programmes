#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> threeSum(vector<int> &nums)
{
    // make a storage named result
    vector<vector<int>> result;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); ++i)
    {
        // skip duplicate
        if (i > 0 && nums[i] == nums[i - 1])
        {
            continue;
        }
        // declare two pointers
        int left = i + 1;
        int right = nums.size() - 1;

        while (left < right)
        {
            int total = nums[i] + nums[left] + nums[right];
            if (total < 0)
            {
                left++;
            }
            else if (total > 0)
            {
                right--;
            }
            else
            {                                                         // triplet found
                result.push_back({nums[i], nums[left], nums[right]}); //--->>> ({})
                // removing duplicates
                while (left < right && nums[right] == nums[right - 1])
                {
                    right--;
                }
                while (left < right && nums[left] == nums[left + 1])
                {
                    left++;
                }
                right--;
                left++;
            }
        }
    }
    return result;
}
int main()
{
}