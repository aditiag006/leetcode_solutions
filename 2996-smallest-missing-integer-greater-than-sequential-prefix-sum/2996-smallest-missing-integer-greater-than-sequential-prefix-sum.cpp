class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum = nums[0];
        int j = 1;

        while(j < nums.size() && nums[j] == nums[j - 1] + 1){
            sum += nums[j];
            j++;
        }

        unordered_set<int> set(nums.begin(), nums.end());

        while(set.find(sum) != set.end()){
            sum++;
        }

        return sum;
        
    }
};