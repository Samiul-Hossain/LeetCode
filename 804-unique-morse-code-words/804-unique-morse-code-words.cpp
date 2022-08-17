class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        
        vector <string> str = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        map<string, int> mp;
        int l = words.size();
        for(int i=0; i<l; i++){
            string temp = "";
            for(int j=0; words[i][j]; j++){
                temp.append(str[words[i][j] - 'a']);
            }
            mp[temp]++;
        }
        return mp.size();
    }
};