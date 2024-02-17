class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
            return false;
        unordered_map<char, int> charMap;
        
        int len = s.size();
        
        for(int i=0; i<len; i++){
            charMap[s[i]]++;
        }
        
        for(int i=0; i<len; i++){
            if(charMap.count(t[i])==0 || charMap[t[i]] == 0)
                return false;
            charMap[t[i]]--;
        }
        
        return true;
    }
};