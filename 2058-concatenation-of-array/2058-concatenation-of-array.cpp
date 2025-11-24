class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>a=nums;
        nums.insert(nums.end(),a.begin(),a.end());
        return nums;
    }
};