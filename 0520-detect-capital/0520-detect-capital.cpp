class Solution {
public:
    bool detectCapitalUse(string word) {
        int capCount = 0;
        for(int i=0; word[i] != '\0'; i++){
            int temp = word[i] - 'A';
            if(temp<26)
                capCount++;
        }
        if(capCount == 1 && word[0] - 'A' >= 26)
            return false;
        if(capCount == 0 || capCount == 1 || capCount == word.size())
            return true;
        else return false;
    }
};