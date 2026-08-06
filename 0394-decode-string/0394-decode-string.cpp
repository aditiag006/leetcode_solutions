class Solution {
public:
    string decodeString(string s) {
        stack<char> st;
        string ans ="";

        for(int i = 0; i < s.size(); i++){  
            if(s[i] == ']'){
                string curr ="";
                while(st.top() != '['){
                    curr = st.top() + curr;
                    st.pop();
                }

                st.pop();

                int val = 0;
                int place  = 1;
                while(!st.empty() && isdigit(st.top())){
                    val += (st.top() - '0')*place;
                    place *= 10;
                    st.pop();
                }
                
                string temp = curr;
                for(int k = 1; k < val ; k++){
                    curr += temp;
                }

                for(int j = 0; j < curr.size(); j++){
                    st.push(curr[j]);
                }
                
            }
            else{
                st.push(s[i]);
            }
        }

        while(!st.empty()){
            ans = st.top() + ans;
            st.pop();
        }

        return ans;
        
    }
};