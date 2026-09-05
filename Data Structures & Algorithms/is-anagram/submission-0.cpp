class Solution {
public:
    bool isAnagram(string s, string t) {
        int count = 0;
        int arra[26] = {0};
        int arrb[26] = {0};
        if (s.length() != t.length()) return false;
        for(int i = 0;i < s.length();i++){
            arra[s[i] - 'a']++;
        }

        for(int i = 0;i < t.length();i++){
            arrb[t[i] - 'a']++;
        }

        for(int i = 0;i < 26;i++)if(arra[i] == arrb[i])count++;

        if(count == 26)return true;
        else return false;
    }
};
