class Solution {
public:
    int trap(vector<int>& height) {
        int n = (int)height.size();
        int LEFT_MAX[n];
        int max_h = 0;
        for(int i = 0; i < n; i ++){
            LEFT_MAX[i] = max_h;
            max_h = max(max_h, height[i]);
        }
        int RIGHT_MAX[n];
        max_h = 0;
        for(int i = n - 1; i >= 0; i --){
            RIGHT_MAX[i] = max_h;
            max_h = max(max_h, height[i]);
        }
        int ans = 0;
        for(int i = 0; i < n; i ++){
            int water_level = min(LEFT_MAX[i], RIGHT_MAX[i]);
            if(water_level > height[i]){
                ans += water_level - height[i];
            }
        }
        return ans;
    }
};