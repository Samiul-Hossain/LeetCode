class Solution {
public:
    bool checkIfPangram(string sentence) {
        int arr[26] = {0};
        int key;
        for(int i=0; sentence[i] != '\0'; i++){
            key = sentence[i] - 'a';
            arr[key]++;
        }
        for(int i=0; i<26; i++){
            if(arr[i] == 0)
                return false;
        }
        return true;
    }
};