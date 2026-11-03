class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = std::accumulate(nums.begin(), nums.end(), 0);
        int idealSum = (nums.size()*(nums.size()+1))/2;
        return idealSum - sum;
    }
};