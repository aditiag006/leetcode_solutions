class Solution {
public:
    int pivotInteger(int n) {

        vector<int> prefix(n+1);
        vector<int> suffix(n+1);

        int psum = 0;
        for(int i = 1; i <= n; i++){
            psum += i;
            prefix[i] = psum;
        }

        int ssum = 0;
        for(int i = n; i > 0; i--){
            ssum += i;
            suffix[i] = ssum;
        }

        for(int i = 1; i <= n; i++){
            if(prefix[i] == suffix[i]){
                return i;
            }
        }

        return -1;
        
    }
};