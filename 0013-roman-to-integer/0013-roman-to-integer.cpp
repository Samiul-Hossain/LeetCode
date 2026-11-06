class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> roman = {{'I', 1}, {'V', 5},{'X', 10},{'L', 50},{'C', 100},{'D', 500},{'M', 1000}};
        int sum = roman[s[0]];
        if(s.size()==1)
            return sum;
        for(int i = 1; i<s.size(); i++){
            if((s[i] == 'V' || s[i] == 'X') && s[i-1] == 'I'){
                sum += roman[s[i]] - 2 * roman['I'];
            }
            else if((s[i] == 'L' || s[i] == 'C') && s[i-1] == 'X'){
                sum += roman[s[i]] - 2 * roman['X'];
            }
            else if((s[i] == 'D' || s[i] == 'M') && s[i-1] == 'C'){
                sum += roman[s[i]] - 2 * roman['C'];
            }
            else
                sum += roman[s[i]];
        }
        return sum;
    }
};