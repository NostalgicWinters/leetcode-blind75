class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());

        while (low < high) {
            int k = low + (high - low) / 2;

            long long hours = 0;

            for (int bananas : piles) {
                hours += (bananas + k - 1) / k;

                // No need to calculate further
                if (hours > h)
                    break;
            }

            if (hours <= h) {
                // k works, but maybe a smaller speed works
                high = k;
            } else {
                // k is too slow
                low = k + 1;
            }
        }

        return low;
    }
};