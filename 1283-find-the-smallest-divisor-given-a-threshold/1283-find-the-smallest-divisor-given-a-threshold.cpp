class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size() - 1;

        sort(nums.begin(), nums.end());

        int low = 1;
        int high = nums[n];

        while(low <= high){

            int mid = low + (high - low)/2;
            int sum = 0;

            for(int val : nums){
                sum += val % mid == 0? val/mid : val/mid + 1;
            }

            if(threshold >= sum){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }

        }
        return low;        
    }
};