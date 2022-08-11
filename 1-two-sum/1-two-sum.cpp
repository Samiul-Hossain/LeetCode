class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        int l = nums.size();
        for(int i=0; i<l; i++){
            auto it = mp.find(target-nums[i]);
            if(it!=mp.end()&&i!=it->second){
                return {i, it->second};
            }
            mp.emplace(nums[i],i);
        }
        return {};
    }
};