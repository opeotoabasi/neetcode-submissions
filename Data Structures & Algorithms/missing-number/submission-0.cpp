class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xorj = 0;
        for(int i = 0;i < nums.size();i++){
            xorj ^= nums[i];
        }
        for(int i = 0;i <= nums.size();i++){
            xorj ^= i;
        }
        return xorj;
    }
};
