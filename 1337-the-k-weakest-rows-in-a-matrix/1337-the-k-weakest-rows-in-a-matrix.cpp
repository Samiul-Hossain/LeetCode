class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> sum(mat.size(),0);
        vector<int> ret;
        set<pair<int,int> > s;
        for(int i=0; i<mat.size(); i++){
            for(int j=0; j<mat[i].size(); j++){
                sum[i] += mat[i][j];
            }
        }
        for(int i=0; i<sum.size(); i++){
            s.insert(make_pair(sum[i], i));
        }
        int cnt = 1;
        for(auto j: s){
            if(cnt>k)
                break;
            ret.push_back(j.second);
            cnt++;
        }
        return ret;
    }
};