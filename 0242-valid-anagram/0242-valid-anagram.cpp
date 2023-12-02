class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
            return false;
        map<char,int> mp;
        map<char,int> mp2;
        
        for(auto it: s){
            mp[it]++;
        }
        
        for(auto it: t){
            mp2[it]++;
        }
        
        for(auto it: mp){
            if(mp2[it.first] != it.second)
                return false;
        }
        
        return true;
    }
};