class Solution {
public:
    string removeDuplicateLetters(string s) {
        stack<char> st;
        vector<int> last_visited(26, 0);
        vector<bool> taken(26, false);

        string ans = "";

        for(int i = 0; i < s.length(); i++){
            last_visited[s[i] - 'a'] = i;
        }

        for(int i = 0; i < s.length(); i++){
            char ch = s[i];

            if(taken[ch - 'a']) continue;

            while(!st.empty() && st.top() > ch && last_visited[st.top() - 'a'] > i){
                taken[st.top() - 'a'] = false;
                st.pop();
                
            }

            st.push(ch);
            taken[ch - 'a'] = true;
        }

        while(!st.empty()){
            ans = st.top() + ans;
            st.pop();
        }

        return ans;
        
    }
};