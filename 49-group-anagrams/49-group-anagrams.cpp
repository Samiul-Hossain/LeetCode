class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ret;
        unordered_map<string, vector<string>> mp;
        int len = strs.size();
        for(int i=0; i<len; i++){
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            mp[temp].push_back(strs[i]);
        }
        int a = 0;
        for(auto it: mp){
            ret.push_back(it.second);
        }
        return ret;
    }
};