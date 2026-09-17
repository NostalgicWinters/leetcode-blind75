class Solution {
public:
    bool isValid(string s) {
        vector<char> arr;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                arr.push_back(s[i]);
            } else if (s[i] == ')') {
                if (arr.empty() || arr.back() != '(') {
                    return false;
                }
                arr.pop_back();
            } else if (s[i] == ']') {
                if (arr.empty() || arr.back() != '[') {
                    return false;
                }
                arr.pop_back();
            } else if (s[i] == '}') {
                if (arr.empty() || arr.back() != '{') {
                    return false;
                }
                arr.pop_back();
            }
        }
        return arr.empty();
    }
};

