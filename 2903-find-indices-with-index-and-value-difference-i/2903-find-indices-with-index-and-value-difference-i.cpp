class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {

        // for(int i = 0; i < nums.size() - indexDifference; i++){
        //     int j = i + indexDifference;
        //     while(j < nums.size()){
        //         if(abs(nums[i] - nums[j]) >= valueDifference){
        //             return {i, j};
        //         }
        //         j++;
        //     }
        // }
        // return {-1, -1};

        int n = nums.size();
        int minval = nums[0];
        int maxval = nums[0];

        int minidx = 0;
        int maxidx = 0;

        for(int j = indexDifference; j < n; j++){
            int i = j - indexDifference;

            if(nums[i] < minval){
                minval = nums[i];
                minidx = i;
            }

            if(nums[i] > maxval){
                maxval = nums[i];
                maxidx = i;
            }

            if(maxval - nums[j] >= valueDifference){
                return{maxidx, j};
            }

            if(nums[j] - minval >= valueDifference){
                return {minidx, j};
            }
        }

        return {-1, -1};
        
    }
};