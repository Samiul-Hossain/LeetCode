class Solution {
public:
    int abs(int a){
        if(a<0)
            return -a;
        return a;
    }
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int numSize = nums.size();
        int qSize = queries.size();
        int evenCount = 0;
        for(int i=0; i<numSize; i++){
            if(nums[i]%2 == 0)
                evenCount += nums[i];
        }
        vector<int> ret;
        for(int i=0; i<qSize; i++){
            
            int valI = queries[i][0];
            int indexI = queries[i][1];
            int temp = nums[indexI];
            nums[indexI] += valI;
            
            if(temp%2 == 0)
                evenCount -= temp;
            
            if(nums[indexI]%2==0)
                evenCount += nums[indexI];
            
            ret.push_back(evenCount);
        }
        return ret;
    }
};