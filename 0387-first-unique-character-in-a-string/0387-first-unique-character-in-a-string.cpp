class Solution {
public:
    int firstUniqChar(string s) {
        int n=s.size();
        map<char, int> mp;
        int index = -1;
        for(auto it: s){
            mp[it]++;
        }
        for(int i=0; i<n; i++){
            if(mp[s[i]]>1){
                continue;
            }else{
                return i;
            }
        }
        return index;
    }
};