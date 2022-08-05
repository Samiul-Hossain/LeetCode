class Solution {
public:
    int arr[20001] = {0};
    vector<int> topKFrequent(vector<int>& nums, int k) {
        for(int i=0; i<nums.size(); i++){
            arr[nums[i] + 10000]++;
        }
        priority_queue <pair<int,int>> pq;
        for(int i=0; i<20000; i++){
            if(arr[i]>0){
                pq.push({arr[i],i-10000});
            }
        }
        vector <int> ret;
        for(int i=0; i<k; i++){
            ret.push_back(pq.top().second);
            pq.pop();
        }
        return ret;
    }
};