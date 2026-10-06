class Solution {
public:
    int search(vector<int>& nums, int target) {
        auto bin = [&](auto& self, int star, int end) -> int {
            if (star > end) return -1;
            int mid = star + (end - star) / 2;
            if (target == nums[mid])
                return mid;
            else if (target > nums[mid])
                return self(self, mid + 1, end);
            else 
                return self(self, star, mid - 1);
        };

        return bin(bin, 0, (int)nums.size() - 1);
    }
};
