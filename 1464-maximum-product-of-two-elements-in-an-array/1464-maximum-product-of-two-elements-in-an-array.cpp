class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int, vector<int>> pq;
        for(int i=0; i<nums.size(); i++){
            pq.push(nums[i]);
        }
        int temp = pq.top(); pq.pop();
        int temp2 = pq.top();
        return (temp - 1)*(temp2 - 1);
    }
};