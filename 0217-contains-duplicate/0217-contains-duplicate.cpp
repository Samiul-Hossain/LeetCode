class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> exists;
        for(auto it: nums){
            if(exists.count(it))
                return true;
            exists[it]++;
        }
        return false;
    }
};