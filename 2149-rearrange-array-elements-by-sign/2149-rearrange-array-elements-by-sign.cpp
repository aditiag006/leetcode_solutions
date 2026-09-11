class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int pi = 0;
        int ni = 1;
        int n = nums.size();
        vector<int> res(n);
        
        for(int i = 0; i < n; i++){
            if(nums[i] >= 0){
                res[pi] = nums[i];
                pi += 2;
            }else{
                res[ni] = nums[i];
                ni += 2;
            }
        }

        return res;
    }
};