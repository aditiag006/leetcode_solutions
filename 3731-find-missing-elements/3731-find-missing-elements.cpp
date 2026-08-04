class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> rem;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size()-1; i++){
            int j = i + 1;

            int ele = nums[i];

            while(nums[j] - ele > 1){
                rem.push_back(ele + 1);
                ele += 1;
            }
        }

        return rem;
        
    }
};