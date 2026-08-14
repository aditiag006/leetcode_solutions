class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char, int> mp;

        int maxlength = 0;
        int i = 0;
        for(int j = 0 ; j < s.length(); j++){
            mp[s[j]]++;
            while(mp[s[j]] > 2){
                mp[s[i]]--;
                i++;
            }

            maxlength = max(maxlength, j - i + 1);

        }

        return maxlength;
    }
};