class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mpp;

        for (string element : strs) {
            string ele = element;
            sort(element.begin(), element.end());

            mpp[element].push_back(ele);
        }

        vector<vector<string>> res;

        for (auto &p : mpp) {
            res.push_back(p.second);
        }

        return res;
    }
};