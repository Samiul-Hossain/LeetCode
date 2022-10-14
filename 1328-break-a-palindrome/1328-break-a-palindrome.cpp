class Solution {
public:
    string breakPalindrome(string palindrome) {
        int n = palindrome.length();
		//If there is 1 or no character then we need  to return empty string
        if(n<=1){
            return "";
        }
        
		//to make the condition of palindrome false we need to replace any of the character from the start to 'a' if it is not equal to 'a'.
		//Then it make the string non-plaindrome and is also is smaller in lexiographical order
        for(int i=0; i<n/2; i++){
            if(palindrome[i]!='a'){
                palindrome[i] = 'a';
                return palindrome;
            }
        }
		
		//if all the characters are equal to a then we need to make the last character equal to b
        palindrome[n-1] = 'b';
        return palindrome;
    }
};