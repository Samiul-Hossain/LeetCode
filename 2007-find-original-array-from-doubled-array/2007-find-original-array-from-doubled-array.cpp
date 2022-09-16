class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        if (changed.size() & 1) return {};
        unordered_map<int, int> m;
        for (auto x: changed) m[x]++;
        vector<int> ans;
        vector<int> uniqueNumbers;
        for (auto x : m) uniqueNumbers.push_back(x.first);
        sort(uniqueNumbers.begin(), uniqueNumbers.end());
        for (auto x : uniqueNumbers) {
            if (m[x] > m[x * 2]) return {};
            for (int i = 0; i < m[x]; i++) {
                ans.push_back(x);
                m[x * 2] -= 1;
            }
        }
        return ans;
    }
};