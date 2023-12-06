class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n==0)
            return;
        if(m==0){
            nums1 = nums2;
            return;
        }
        int i=0, j = 0;
        vector<int> ret;
        while(i<m && j<n){
            if(nums1[i]<nums2[j])
                ret.push_back(nums1[i++]);
            else
                ret.push_back(nums2[j++]);
        }
        while(i<m)
            ret.push_back(nums1[i++]);
        while(j<n)
            ret.push_back(nums2[j++]);
        for(int k=0; k<m+n; k++){
            nums1[k] = ret[k];
        }
        return;
    }
};