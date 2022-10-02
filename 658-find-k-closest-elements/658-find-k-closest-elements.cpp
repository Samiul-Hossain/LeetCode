class Solution {
public:
    int abs(int a){
        if(a<0)
            return -a;
        return a;
    }
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> ret;
        
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        for(auto i: arr){
            pq.push({abs(i-x), i});
        }
        
        for(int i=0; i<k; i++){
            ret.push_back(pq.top().second);
            pq.pop();
        }
        sort(ret.begin(), ret.end());
        return ret;
    }
};