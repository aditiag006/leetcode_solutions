class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> prefix(n, 0);
        vector<int> suffix(n, 0);


        prefix[0] = nums[0];
        int pmax = prefix[0];
        for(int i = 1; i < n; i++){
            if(pmax < nums[i]){
                pmax = nums[i];
                
            }
            prefix[i] = pmax;
        }

        suffix[n-1] = nums[n-1];
        int smin = suffix[n-1];
        for(int i = n-2; i >= 0; i--){
            if(smin > nums[i]){
                smin = nums[i];
            }
            suffix[i] = smin;
        }

        for(int i = 0; i < n; i++){
            if(prefix[i] - suffix[i] <= k){
                return i;
            }
        }

        return -1;
        
    }
};