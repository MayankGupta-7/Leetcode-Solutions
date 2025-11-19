class Solution {
public:
    int findFinalValue(vector<int>& nums, int orignal) {
        unordered_set<int> m(nums.begin() , nums.end());
        while (m.find(orignal) != m.end()){
            orignal=orignal*2;
        }
        return orignal;
    }
};