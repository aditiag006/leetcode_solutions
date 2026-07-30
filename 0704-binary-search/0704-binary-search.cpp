class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st = 0;
        int end = nums.size() - 1;

        while(st < end){
            int mid = st + (end - st)/2;

            if(target > nums[mid]) st = mid + 1;
            else end = mid;
        }
        if(target != nums[st]) return -1;
        
        return st;
        
    }
};