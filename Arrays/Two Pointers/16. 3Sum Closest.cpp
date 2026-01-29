// Given an integer array nums of length n and an integer target, find three integers at distinct indices in nums such that the sum is closest to target.

// Return the sum of the three integers.

// You may assume that each input would have exactly one solution.

 

// Example 1:

// Input: nums = [-1,2,1,-4], target = 1
// Output: 2
// Explanation: The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).
// Example 2:

// Input: nums = [0,0,0], target = 1
// Output: 0
// Explanation: The sum that is closest to the target is 0. (0 + 0 + 0 = 0).
 

// Constraints:

// 3 <= nums.length <= 500
// -1000 <= nums[i] <= 1000
// -104 <= target <= 104

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin() , nums.end());
        
        int ans;
        int diff = INT_MAX;

        for(int i = 0; i < n-2; i++){
            if(i && nums[i] == nums[i-1]) continue;
            int j = i+1;
            int k = n-1;

            while(k > j){
                int sum = nums[i]+nums[j]+nums[k];
                if(abs(target-sum) < diff){
                    ans = sum;
                    diff = abs(target-sum);
                }

                if(sum == target){
                    return sum;
                }
                else if(sum < target){
                    j++;
                    while(j < k && nums[j] == nums[j-1]) j++;
                }
                else{
                    k--;
                    while(j < k && nums[k] == nums[k+1]) k--;
                }
            }

        }
        
        return ans;
    }
};
