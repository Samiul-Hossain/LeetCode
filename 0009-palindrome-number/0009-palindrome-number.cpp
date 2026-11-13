class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        if(x<10)
            return true;
        vector<int> numbers;
        int quotient = x;
        int remainder = 0;
        while(quotient>0){
            remainder = quotient%10;
            quotient = quotient/10;
            numbers.push_back(remainder);
        }
        int left = 0;
        int right = numbers.size()-1;
        while(left<right){
            if(numbers[left++] != numbers[right--]){
                return false;
            }
        }
        return true;
    }
};