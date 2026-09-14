class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxAr = 0;
        int l = 0, r = height.size()-1;
        while(l<r){
            int ar = min(height[l], height[r]) * (r-l);
            maxAr = max(ar, maxAr);
            if(height[l] > height[r]){
                r--;
            }
            else{
                l++;
            }
        }
        return maxAr;
    }
};