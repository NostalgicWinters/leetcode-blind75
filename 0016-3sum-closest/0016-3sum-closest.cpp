class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int diff = INT_MAX;
        int sum = 0;
        for(int i = 0; i < n -2; i++)
        {
            int j = i+1, k = n -1;
            while(k>j)
            {
                int twosum = nums[i] + nums[j];
                int tdiff = target - nums[k];
                if(abs(twosum-tdiff) < diff)
                {
                    diff = abs(twosum-tdiff);
                    sum = twosum + nums[k];
                } 
                if( nums[i]+nums[j]+nums[k] < target ) j++;
                else k--;
            } 
        }
        return sum;
    }
};