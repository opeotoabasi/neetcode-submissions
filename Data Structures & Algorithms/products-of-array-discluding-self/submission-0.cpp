class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> answer(n, 1);

        // Products to the left
        int left = 1;

        for (int i = 0; i < n; i++) {
            answer[i] = left;
            left *= nums[i];
        }

        // Products to the right
        int right = 1;

        for (int i = n - 1; i >= 0; i--) {
            answer[i] *= right;
            right *= nums[i];
        }

        return answer;
    }
};
