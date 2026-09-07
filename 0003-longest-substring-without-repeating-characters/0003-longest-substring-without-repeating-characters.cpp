class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> temp;
        int res = 0;
        int l = 0;
        int r = 0;

        while (r < s.size()) {
            if (temp.find(s[r]) == temp.end()) {
                temp.insert(s[r]);
                r++;
                res = max(res, r - l);
            } else {
                temp.erase(s[l]);
                l++;
            }
        }

        return res;
    }
};