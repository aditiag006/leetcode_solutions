class Solution {
public:

    int canMakeMBouq(vector<int>& bloomDay, int mid, int k){
        int bouqCount = 0;
        int consecutiveDays = 0;

        for(int i = 0; i < bloomDay.size(); i++){
            if(bloomDay[i] <= mid){
                consecutiveDays++;
            }
            else{
                consecutiveDays = 0;
            }

            if(consecutiveDays == k){
                bouqCount++;
                consecutiveDays = 0;
            }
            
        }

        return bouqCount;
    }
    
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        int st = 0;
        int end  = 0;
        for(int i = 0; i < n; i++){
            end = max(end, bloomDay[i]);
        }
        int minDays = -1;

        while(st <= end){
            int mid  = st + (end - st)/2;

            if(canMakeMBouq(bloomDay, mid, k) >= m){
                minDays = mid;
                end  = mid - 1;

            }
            else{
                st = mid + 1;
            }
        }

        return minDays;
        
    }
};