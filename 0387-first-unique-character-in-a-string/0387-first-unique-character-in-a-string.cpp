class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> scount;
        for(auto i: s){
            scount[i] += 1;
        }
        for(int i=0; i<s.size(); i++){
            if(scount[s[i]] == 1){
                return i;
            }
        }
        return -1;
    }
};