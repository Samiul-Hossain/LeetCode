class Solution {
public:
    stack<char> charStack;
    
    bool isValid(string s) {
        if(s.size()%2 != 0)
            return false;
        
        for(auto ch: s){
            if(ch == '{' || ch == '[' || ch == '(')
                charStack.push(ch);
            else{
                if(charStack.empty()){
                    return false;
                }
                if(charStack.top() == '(' && ch == ')')
                    charStack.pop();
                else if(charStack.top() == '[' && ch == ']')
                    charStack.pop();
                else if(charStack.top() == '{' && ch == '}')
                    charStack.pop();
                else
                    return false;
            }
        }
        if(charStack.size()>0)
            return false;
        else return true;
    }
};