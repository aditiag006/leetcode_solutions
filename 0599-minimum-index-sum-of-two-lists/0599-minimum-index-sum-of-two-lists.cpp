class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string, int> mp;

        for(int i = 0; i < list1.size(); i++){
            mp[list1[i]] = i;
        }

        vector<string> ans;
        int minsum = INT_MAX;

        for(int i = 0; i < list2.size(); i++){
            if(mp.find(list2[i]) != mp.end()){
                int sum = mp[list2[i]] + i;

                if(sum < minsum){
                    minsum = sum;
                    ans.clear();
                    ans.push_back(list2[i]);
                }
                else if(sum == minsum){
                    ans.push_back(list2[i]);
                }
            }
        }

        return ans;
        
    }
};