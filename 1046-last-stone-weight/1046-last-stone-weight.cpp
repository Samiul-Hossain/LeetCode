class Solution {
priority_queue<int, vector<int>> pq;
public:
    int lastStoneWeight(vector<int>& stones) {
        int temp, temp2, temp3;
        for(int i=0; i<stones.size(); i++){
            pq.push(stones[i]);
        }
        while(pq.size()>1){
            temp = pq.top();
            pq.pop();
            temp2 = pq.top();
            pq.pop();
            temp3 = temp - temp2;
            if(temp3 == 0)
                continue;
            if(temp3>0)
                pq.push(temp3);
            
        }
        if(pq.empty())
            return 0;
        else return pq.top();
    }
};