class Solution {
public:
    int strStr(string haystack, string needle) {
        int hLen = haystack.size();
        int nLen = needle.size();
        int index = 0;
        
        for(int i=0; i<hLen; i++){
            if(haystack[i] == needle[index]){
                index++;
            }else{
                i=i-index;
                index = 0;
            }
            if(index == nLen)
                return i - nLen + 1;
        }
        return -1;
    }
};
