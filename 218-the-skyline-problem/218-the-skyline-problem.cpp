#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

class Solution {
public:
    vector<pair<int, int>>point;
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
        vector<vector<int>>ans;
        for (int i = 0; i < buildings.size(); ++i) {
            point.push_back({ buildings[i][0], - buildings[i][2] });
            point.push_back({ buildings[i][1], buildings[i][2] });
        }
        sort(point.begin(), point.end());
        multiset<int>heap;
        heap.insert(0);
        int prev = 0;
        for (auto &it : point) {
            int x = it.first;
            int y = it.second;
            (y < 0) ? heap.insert(-y) : heap.erase(heap.find(y));
            if (prev != *heap.rbegin()) {
                y = *heap.rbegin();
                ans.push_back({ x,y });
                prev = y;
            }
        }
        return ans;
    }
};
