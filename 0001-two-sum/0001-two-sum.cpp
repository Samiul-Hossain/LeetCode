class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> cnt;
        for (int i = 0; i < nums.size(); i++) {
            if (cnt.count(target - nums[i])) {
                return {cnt[target - nums[i]], i};
            }
            cnt[nums[i]] = i;
        }
        return {};
    }
};