#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i = 0; i < n-1;i ++){
            for(int j = i+1; j < n;j++){
                if(nums[i] + nums[j] == target){
                    return {i,j};
                }
            }
        }
        return {}; //element not found
    }
};
int main() {
    Solution solution; // Create an instance of the Solution class
    vector<int> nums = {2, 7, 11, 15}; // Input array
    int target = 9; // Target value

    vector<int> result = solution.twoSum(nums, target); // Call the function

    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No solution found" << endl;
    }

    return 0;
}