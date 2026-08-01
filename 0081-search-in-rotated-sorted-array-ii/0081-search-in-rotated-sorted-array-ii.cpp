class Solution {
public:

    // int findPivot(vector<int>& nums, int l, int r){
    //     while(l<r){

    //         while(l<r && nums[l] == nums[l+1]) l++;

    //         while(l<r && nums[r] == nums[r-1]) r--;

    //         int mid = l + (r - l)/2;

    //         if(nums[mid] > nums[r]){
    //             l = mid + 1;
    //         }
    //         else{
    //             r = mid;
    //         }
    //     }

    //     return r;
    // }

    // bool binarySearch(vector<int>& nums, int l, int r, int target){

    //     while(l <= r){
    //         int mid = l + (r - l)/2;
    //         if(nums[mid] == target){
    //             return true;
    //         }
    //         else if(nums[mid] > target){
    //             r = mid - 1;
    //         }
    //         else{
    //             l = mid + 1;
    //         }
    //     }

    //     return false;
    // }


    // bool search(vector<int>& nums, int target) {
    //     int n = nums.size();
    //     int pivot = findPivot(nums, 0, n-1);

    //     if(binarySearch(nums, 0, pivot - 1, target)){
    //         return true;
    //     }

    //     return binarySearch(nums, pivot, n - 1, target);
        
    // }

    bool search(vector<int>& nums, int target) {
        int st = 0;
        int end  = nums.size() - 1;
        while(st <= end){
            int mid = st + (end  - st)/2;

            if(nums[mid] == target) return true;

            if(nums[st] == nums[mid] && nums[mid] == nums[end]){
                st++;
                end--;
                continue;
            }

            if(nums[st] <= nums[mid]){
                if(nums[st] <= target && target <= nums[mid]){
                    end = mid -1;
                }
                else{
                    st = mid + 1;
                }
            }
            else{
                if(nums[mid] <= target && target <= nums[end]){
                    st = mid + 1;
                } 
                else{
                    end = mid - 1;
                }
            }
        }
        

        return false;
    }
};