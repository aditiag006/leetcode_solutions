class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n, 0);
        vector<int> suffix(n, 0);


        int psum = 0;
        for(int i = 1; i < n; i++){
            psum +=nums[i-1];
            prefix[i] = psum;
        }

        int ssum = 0;
        for(int i = n-2; i >=0 ; i--){
            ssum +=nums[i+1];
            suffix[i] = ssum;
        }
        
        for(int i = 0; i < n ; i++){
            if(prefix[i] == suffix[i]){
                return i;
            }
        }

        return -1;
    }
};