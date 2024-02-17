class Solution {
public:
    int max(int a, int b){
        return a > b ? a : b;
    }
    int lengthOfLongestSubstring(string s) {
        set<char> charSet;
        int l = 0;
        int len = s.size();
        int ans = 0;
        for(int i=0; i<len; i++){
            while(charSet.find(s[i]) != charSet.end()){
                charSet.erase(s[l]);
                l++;
            }
            charSet.insert(s[i]);
            ans = max(ans,charSet.size());
        }
        return ans;
    }
};