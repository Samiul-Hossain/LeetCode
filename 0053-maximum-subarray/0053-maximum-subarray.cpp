class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = nums[0];
        int len = nums.size();
        int currSum = nums[0];
        for(int i=1; i<len; i++){
            if(currSum < 0 && currSum<nums[i]){
                currSum = nums[i];
                ans = max(currSum, ans);
            }else{
                currSum += nums[i];
                ans = max(currSum, ans);
            }
        }
        return ans;
    }
};