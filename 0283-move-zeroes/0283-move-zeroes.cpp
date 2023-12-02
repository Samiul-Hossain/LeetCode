class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int slow = 0, size = nums.size();
        for(int i=0; i<size; i++){
            nums[i-slow] = nums[i];
            if(nums[i] == 0)
                slow++;
        }
        for(int i=size-slow; i<size; i++){
            nums[i] = 0;
        }
    }
};