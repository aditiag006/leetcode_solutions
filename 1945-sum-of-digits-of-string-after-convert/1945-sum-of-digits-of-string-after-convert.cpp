class Solution {
public:
    int getLucky(string s, int k) {
        string to_num = "";
        for(int i = 0; i < s.length(); i++){
            to_num += to_string(s[i] - 'a' + 1);
        }

        
        while(k > 0){
            int added = 0;
            for(int i = 0; i < to_num.length(); i++){
                added += (to_num[i] - '0');
            }
            to_num = to_string(added);
            k--;
        }
        int ans = 0;

        for(char ch : to_num){
            ans = ans*10 + (ch - '0');
        }

        return ans;
        
    }
};