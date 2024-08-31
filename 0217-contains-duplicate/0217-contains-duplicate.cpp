class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(auto it: nums){
            if(mp.count(it))
                return true;
            mp[it]++;
        }
        return false;
    }
};