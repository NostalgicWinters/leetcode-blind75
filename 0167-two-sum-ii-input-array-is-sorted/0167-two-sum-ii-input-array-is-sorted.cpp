class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0, r = numbers.size()-1;
        while(l<r){
            int num = target-numbers[l];
            if(numbers[r]==num){
                return {l+1, r+1};
            }
            else if(numbers[r]>num){
                r--;
            }
            else{
                l++;
            }
        }
        return {};

    }
};