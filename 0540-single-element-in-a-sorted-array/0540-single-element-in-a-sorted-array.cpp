class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int st = 0; 
        int end = nums.size() - 1;

        while(st < end){
            int mid = st + (end - st)/2;
            int dis = end - mid;

            if(nums[mid] == nums[mid+1]){
                if(dis % 2 != 0){
                    end = mid - 1;
                }
                else{
                    st = mid+2;
                }
            }
            else{
                if(dis % 2 != 0){
                    st = mid+1;
                }
                else{
                    end = mid;
                }
            }
            
        }

        return nums[st];
        
    }
};