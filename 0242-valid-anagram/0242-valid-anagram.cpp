class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        for (int i = 0; i < s.size(); i++) {
            size_t pos = t.find(s[i]);

            if (pos != string::npos) {
                t.erase(pos, 1);
            } 
            else {
                return false;
            }
        }

        return true;
    }
};