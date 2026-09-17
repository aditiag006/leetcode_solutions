class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++){
            stack<int> st;
            int num = nums[i];
            while(num > 0){
                int rem = num%10;
                st.push(rem);
                num /= 10;

            }
            while(!st.empty()){
                ans.push_back(st.top());
                st.pop();
            }
        }
        return ans;
        
    }
};