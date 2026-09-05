class Solution {
public:
    bool isPalindrome(string s) {
        string t;

        for (int i = 0; i < s.length(); i++) {

            if ((s[i] >= 'a' && s[i] <= 'z') ||
                (s[i] >= 'A' && s[i] <= 'Z') ||
                (s[i] >= '0' && s[i] <= '9')) {

                if (s[i] >= 'A' && s[i] <= 'Z')
                    t += s[i] + ('a' - 'A');
                else
                    t += s[i];
            }
        }

        int left = 0;
        int right = t.length() - 1;

        while (left < right) {
            if (t[left] != t[right])
                return false;

            left++;
            right--;
        }

        return true;
    }
};