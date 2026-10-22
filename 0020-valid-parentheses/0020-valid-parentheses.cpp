class Solution {
public:
    bool isValid(std::string s) {
        stack<char> stk;
        for (char i : s) {
            if (i == '(' || i == '[' || i == '{') {
                stk.push(i);
            } 
            else if (i == ')' || i == ']' || i == '}') {
                if (stk.empty()) {
                    return false;
                }
                char topElement = stk.top();
                if ((i == ')' && topElement == '(') ||
                    (i == ']' && topElement == '[') ||
                    (i == '}' && topElement == '{')) {
                    stk.pop(); 
                } else {
                    return false; 
                }
            }
        }
        return stk.empty();
    }
};
