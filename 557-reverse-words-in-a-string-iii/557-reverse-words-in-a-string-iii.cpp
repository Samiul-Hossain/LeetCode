class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        string temp = "";
        int i = 0;
        while(s[i] != '\0'){
            if(s[i] == ' '){
                reverse(temp.begin(), temp.end());
                v.push_back(temp);
                temp = "";
                i++;
            }
            temp += s[i];
            i++;
        }
        reverse(temp.begin(), temp.end());
        v.push_back(temp);
        string ret = "";
        int retSize = v.size();
        for(int i=0; i<retSize; i++){
            ret += v[i];
            ret += " ";
        }
        ret.pop_back();
        return ret;
    }
};