class Solution {
public:
    bool isValid(string s) {
        auto stack = vector<char>();
        // Iterate through each character in the string
        for (char c : s) {
            // if an opening character, push to stack
            if (c == '(' || c == '{' || c == '[') {
                stack.push_back(c);
            // if a closing character, check if it matches the top of the stack
            } else {
                // if stack is empty, no matching opening character
                if (stack.empty()) {
                    return false;
                }
                // pop the top character from the stack
                char top = stack.back();
                stack.pop_back();
                // check if the closing character matches the opening character
                if ((c == ')' && top != '(') ||
                    (c == '}' && top != '{') ||
                    (c == ']' && top != '[')) {
                    return false;
                }
            }
        }
        // if stack is empty at the end, all characters are valid
        return stack.empty();
    }
};