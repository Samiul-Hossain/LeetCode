class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0, end = nums.size() - 1;
        while(start<end){
            if(nums[start]<nums[end])
                return nums[start];
            int mid = (start+end)/2;
            
            if(nums[mid]>=nums[start]){
                start = mid+1;
            }else{
                end = mid;
            }
        }
        return nums[start];
    }
};
/*
 int findMin(vector<int> &num) {
        int start=0,end=num.size()-1;
        
        while (start<end) {
            if (num[start]<num[end])
                return num[start];
            
            int mid = (start+end)/2;
            
            if (num[mid]>=num[start]) {
                start = mid+1;
            } else {
                end = mid;
            }
        }
        
        return num[start];
    }
*/