class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int starting = -1, ending = -1;
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(nums[i] == target){
                starting= i;
                break;
            }
        }
        for(int i=n-1; i>=0; i--){
            if(nums[i] == target){
                ending = i;
                break;
            }
        }
        return {starting, ending};
    }
};