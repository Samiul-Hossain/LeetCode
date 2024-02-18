class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        unordered_map<int, int> trustees;
        unordered_map<int, int> trusted;
        
        
        for(auto it: trust){
            trustees[it[1]]++;
            trusted[it[0]]++;
        }
        
        for(int i=1; i<=n; i++){
            if(trustees[i] == n-1 && trusted.count(i) == 0)
                return i;
        }
        
        return -1;
    }
};