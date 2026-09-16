class Solution {
public:
    int maxProduct(int n) {
        int max_1 = 0;
        int max_2 = 0;


        while(n > 0){
            int rem = n%10;

            if(rem > max_1){
                max_2 = max_1;
                max_1 = rem;
            }else if(rem > max_2){
                max_2 = rem;
            }

            n = n/10;
        }

        return max_1*max_2;
        
    }
};