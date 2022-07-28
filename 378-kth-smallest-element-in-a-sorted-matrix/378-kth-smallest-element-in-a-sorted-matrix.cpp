#include<bits/stdc++.h>
using namespace std;
class Solution {
    static bool heapComp(int a, int b) {
        return a > b;
    }
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector <int> v;
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[i].size(); j++){
                v.push_back(matrix[i][j]);
            }
        }
        make_heap(v.begin(), v.end(), heapComp);
        for(int c=1; c<k; c++){
            pop_heap(v.begin(), v.end(), heapComp);
            v.pop_back();
        }
        return v.front();
    }
};