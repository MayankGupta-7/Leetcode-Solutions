class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int m = bits.size();
    int i = 0;
    while(i < m - 1)
        i += bits[i] + 1;
    return i == m - 1;
    }
};