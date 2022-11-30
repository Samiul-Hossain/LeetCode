class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> numCount;
        map<int, int> occurCount;
        int size = arr.size();
        for(int i=0; i<size; i++){
            numCount[arr[i]]++;
        }
        int size2 = numCount.size();
        for(auto i: numCount){
            if(occurCount.find(i.second) != occurCount.end())
                return false;
            occurCount[i.second]++;
        }
        return true;
    }
};