class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> freq(256, 0);

        int l = 0;
        int maxCount = 0;

        for (int r = 0; r < s.size(); r++) {
            while (freq[s[r]] > 0) {
                freq[s[l]]--;
                l++;
            }

            freq[s[r]]++;

            maxCount = max(maxCount, r - l + 1);
        }

        return maxCount;
    }
};