class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set <int> s;
        for(int element:nums){
            s.insert(element);
        }

        if(nums.size()==s.size()) return false;
        return true;
    }
};