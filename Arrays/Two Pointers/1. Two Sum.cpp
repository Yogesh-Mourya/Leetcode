// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

 

// Example 1:

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
// Example 2:

// Input: nums = [3,2,4], target = 6
// Output: [1,2]
// Example 3:

// Input: nums = [3,3], target = 6
// Output: [0,1]
 

// Constraints:

// 2 <= nums.length <= 104
// -109 <= nums[i] <= 109
// -109 <= target <= 109
// Only one valid answer exists.
 

// Follow-up: Can you come up with an algorithm that is less than O(n2) time complexity?

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // app 2
        unordered_map<int, int> mp;

        for(int i = 0; i < nums.size(); i++){
            int more = target - nums[i];
            if(mp.find(more) != mp.end()){
                return {mp[more], i};
            }
            mp[nums[i]] = i;
        }
        return {-1,-1};

        
        // vector<int> ans;
        // map<int, int> correct_index;
        // vector<pair<int, int>> numsWithIndices;
        // for (int i = 0; i < nums.size(); ++i) {
        //     numsWithIndices.push_back({nums[i], i});
        // }

        // sort(numsWithIndices.begin(), numsWithIndices.end());

        // int i = 0;
        // int j = nums.size() - 1;

        // while (j > i) {
        //     int currentSum = numsWithIndices[i].first + numsWithIndices[j].first;

        //     if (currentSum == target) {
        //         ans.push_back(numsWithIndices[i].second);
        //         ans.push_back(numsWithIndices[j].second);
        //         break;
        //     } else if (currentSum > target) {
        //         j--;
        //     } else {
        //         i++;
        //     }
        // }

        // return ans;
    }
};
