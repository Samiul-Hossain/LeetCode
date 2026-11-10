class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(m == 0){
            nums1 = nums2;
            return;
        }
        
        if(n == 0)
            return;
        
        if(m == 0 && n == 0)
            return;

        int k = 0;
        bool swapped = false;
        int s = m+n;

        for(int i = m; i<s ; i++){
            nums1[i] = nums2[k++];
        }
        for(int i=0; i<s-1; i++){
            swapped = false; 
            for(int j=0; j<s-1-i; j++){
                if(nums1[j]> nums1[j+1]){
                    swap(nums1[j], nums1[j+1]);
                    swapped = true;
                }
            }
            if(swapped == false){
                break;
            }
        }
    }
};