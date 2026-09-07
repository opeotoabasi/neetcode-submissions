#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        // 1. Count frequencies
        unordered_map<int, int> count;

        for (int n : nums) {
            count[n]++;
        }

        // 2. Create frequency buckets
        vector<vector<int>> buckets(nums.size() + 1);

        // 3. Put each number into its frequency bucket
        for (auto& pair : count) {
            buckets[pair.second].push_back(pair.first);
        }

        // 4. Collect the K most frequent elements
        vector<int> result;

        for (int i = nums.size(); i >= 0; i--) {

            for (int n : buckets[i]) {

                result.push_back(n);

                if (result.size() == k) {
                    return result;
                }
            }
        }

        return result;
    }
};