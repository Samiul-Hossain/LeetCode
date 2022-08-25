class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        bool ret = true;
        int chCount[27] = {0};
        for(int i=0; magazine[i]; i++){
            chCount[magazine[i] - 'a']++;
        }
        for(int i=0; ransomNote[i]; i++){
            if(chCount[ransomNote[i]-'a']>0)
                chCount[ransomNote[i]-'a']--;
            else{
                ret = false;
                break;
            }
        }
        return ret;
    }
};