class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set(nums.begin(), nums.end());

        int longest = 0;

        for(int num : set){
            int curr = 0;
            int cnt = 0;

            if(set.find(num - 1) == set.end()){
                curr = num;
                cnt = 1;

                while(set.find(curr + 1) != set.end()){
                    curr++;
                    cnt++;
                }
            }

            longest = max(longest, cnt);
        }

        return longest;
        
    }
};