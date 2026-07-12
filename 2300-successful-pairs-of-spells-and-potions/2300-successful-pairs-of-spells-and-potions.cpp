class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n = spells.size();
        int m = potions.size();
        int i = 0;
        vector<int> pairs;

        sort(potions.begin(), potions.end());

        while(i<n){
            int cnt = 0;
            int s = 0;
            int e = m - 1;
            
            while(s <= e){
                int mid = s + (e - s)/2;
                long long product = (long long)spells[i]*potions[mid];

                if(product >= success){
                    cnt = m - mid;
                    e = mid - 1;
                }
                else{
                    s = mid + 1;
                }
                
            }
            pairs.push_back(cnt);
            i++;
            
        }
        return pairs;
        
    }
};