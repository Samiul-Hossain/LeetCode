class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map <char,int> scount;
        for(auto i: stones){
            scount[i]+=1;
        }
        int sum = 0;
        for(auto i: jewels){
            if(scount.count(i)){
                sum += scount[i];
            }
        }
        return sum;
    }
};