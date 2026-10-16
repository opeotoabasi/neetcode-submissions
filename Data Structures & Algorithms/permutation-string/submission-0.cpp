
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int m = s1.size();
        int n = s2.size();

        if (m > n) {
            return false;
        }

        int freq1[26] = {0};
        int freq2[26] = {0};

        // Count characters in s1 and the first window of s2
        for (int i = 0; i < m; i++) {
            freq1[s1[i] - 'a']++;
            freq2[s2[i] - 'a']++;
        }

        // Check the first window
        if (equal(freq1, freq1 + 26, freq2)) {
            return true;
        }

        // Slide the window across s2
        for (int i = m; i < n; i++) {
            // Remove the character leaving the window
            freq2[s2[i - m] - 'a']--;

            // Add the new character entering the window
            freq2[s2[i] - 'a']++;

            // Check whether the frequencies match
            if (equal(freq1, freq1 + 26, freq2)) {
                return true;
            }
        }

        return false;
    }
};
