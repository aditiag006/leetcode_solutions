class Solution {
public:

    int countofbinary(int i){
        int cnt = 0;
        if(i == 0) return 0;

        if(i == 1) return 1;
        while(i != 1){
            if(i % 2 == 1) cnt++;
            i = i/2;
        }
        if(i == 1){
            cnt++;
        }
        return cnt;

    }

    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i = 0; i <= n; i++){

            ans.push_back(countofbinary(i));

        }
        return ans;
        
    }
};