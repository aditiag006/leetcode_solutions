class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n; i++){
            int leftsum = 0;
            int rightsum = 0;

            // if(i == 0) leftsum = 0;
            // if(i == n-1) rightsum = 0;

            int left = 0; 
            int right = n-1;

            while(left < i){
                leftsum += nums[left];
                left++;
            }
            while(i < right){
                rightsum += nums[right];
                right--;
            }

            if(leftsum == rightsum) return i;
        }
        return -1;
        
    }
};