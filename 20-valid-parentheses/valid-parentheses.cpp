class Solution {
public:
    bool isValid(string s) {
    stack<char> stk;
    unordered_map<char, char> matching_bracket = {
        {')', '('},
        {'}', '{'},
        {']', '['}
    };

    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            stk.push(c);  // Push opening brackets onto the stack
        } else {
            // If the stack is empty or the top doesn't match the current closing bracket
            if (stk.empty() || stk.top() != matching_bracket[c]) {
                return false;
            }
            stk.pop();  // Pop the matching opening bracket
        }
    }

    return stk.empty();  // If the stack is empty, all brackets matched
}
};