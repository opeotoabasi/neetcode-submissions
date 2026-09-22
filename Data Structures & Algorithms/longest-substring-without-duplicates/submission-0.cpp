class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int last[256];

        // Initialize every position to -1
        for (int i = 0; i < 256; i++) {
            last[i] = -1;
        }

        int left = 0;
        int answer = 0;

        for (int right = 0; right < s.length(); right++) {

            char current = s[right];

            if (last[current] >= left) {
                left = last[current] + 1;
            }

            last[current] = right;

            int length = right - left + 1;

            if (length > answer) {
                answer = length;
            }
        }

        return answer;
    }
};
