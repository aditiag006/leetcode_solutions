class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(), piles.end());
        int n = piles.size();

        int s = 1;
        int e = piles[n-1];
        int ans = e;

        while(s <= e){
            int mid = s +(e-s)/2;
            long long curr_h = 0 ;

            //TLE
            // for(int i = 0; i < n; i++){
            //     int val = piles[i];
            //     if(mid >= val) curr_h++;
            //     else{
            //         while(val>0){
            //             curr_h++;
            //             val = val-mid;
            //         }
            //     }
            // }

            for(int val : piles){
                curr_h += (val + mid -1)/mid;
            }

            if(curr_h <= h){
                ans = mid;
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
        }

        return ans;
        
    }
};