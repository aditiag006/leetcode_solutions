class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {

        vector<int> less, equal, greater;

        for(int val : nums){
            if(val < pivot){
                less.push_back(val);
            }
            else if(val == pivot){
                equal.push_back(val);
            }
            else{
                greater.push_back(val);
            }
        }

        int i = 0;

        for(int val : less){
            nums[i++] = val;
        }

        for(int val : equal){
            nums[i++] = val;
        }

        for(int val : greater){
            nums[i++] = val;
        }

        return nums;
        
    }
};