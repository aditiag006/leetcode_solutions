class Solution {
public:
    string clearDigits(string s) {
        string res = "";
        stack<char> st;
        for(int i = 0; i < s.length(); i++){
            if((s[i]- '0') >= 0 && (s[i] - '9') <= 9){
                if(!st.empty()){
                    st.pop();
                }else{
                    res += s[i];
                }
            }else{
                st.push(s[i]);
            }
        }


        string rem = "";
        while(!st.empty()){
            rem += st.top();
            st.pop();
        }

        reverse(rem.begin(), rem.end());
        res += rem;
        return res;
        
    }
};