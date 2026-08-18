class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }

        vector<int> ans;


        vector<vector<int>> bucket(nums.size()+1);

        for(auto it : mp){
            bucket[it.second].push_back(it.first);
        }

        for(int i = bucket.size()-1; (ans.size() < k) && i >= 1; i--){

            for(int num : bucket[i]){
                ans.push_back(num);

                if(ans.size() == k){
                    break;
                }
            }
        }

        return ans;


        
    }
};