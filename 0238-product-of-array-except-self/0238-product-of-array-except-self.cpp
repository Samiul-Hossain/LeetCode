class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len = nums.size();
        vector<int> prefix(len, 0);
        vector<int> suffix(len, 0);
        vector<int> ans(len, 0);
        
        prefix[0] = 1;
        suffix[len-1] = 1;
        
        for(int i=1; i<len; i++){
            prefix[i] = nums[i-1] * prefix[i-1];
        }
        
        for(int i=len-2; i>=0; i--){
            suffix[i] = suffix[i+1] * nums[i+1];
        }
        
        for(int i=0; i<len; i++){
            ans[i] = prefix[i] * suffix[i];
        }
        
        return ans;
    }
};