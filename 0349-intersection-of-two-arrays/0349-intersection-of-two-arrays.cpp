class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> ret;
        unordered_map<int, int> cnt;
        for(int i=0; i<nums2.size(); i++){
            cnt[nums2[i]]+=1;
        }
        for(int i=0; i<nums1.size(); i++){
            if(cnt.count(nums1[i])>0){
                ret.insert(nums1[i]);
            }
        }
        return vector<int>(ret.begin(), ret.end());
    }
};