class Solution {
public:
    int firstUniqChar(string s) {
        deque<int> dq;
        unordered_map<char, int> mp;

        for(int i = 0; i < s.length(); i++){
            char ch = s[i];
            mp[ch]++;

            dq.push_back(i);

            while(!dq.empty() && mp[s[dq.front()]] > 1){
                    dq.pop_front();  
            }
        }

        if(dq.empty()) return -1;
        
        return dq.front();
    }
};