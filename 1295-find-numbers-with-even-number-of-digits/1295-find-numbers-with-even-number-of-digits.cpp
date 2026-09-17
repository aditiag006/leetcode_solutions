class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0;
        for(int val : nums){
            int temp = 0;
            while(val > 0){
                int rem = val % 10;
                temp++;
                val /= 10;
            }
            if(temp %2 == 0){
                ans++;
            }
        }

        return ans;
        
    }
};