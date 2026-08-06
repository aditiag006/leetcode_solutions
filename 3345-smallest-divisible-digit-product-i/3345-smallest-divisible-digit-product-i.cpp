class Solution {
public:
    int smallestNumber(int n, int t) {
        bool divisible = false;
        while(!divisible){
            int prod = 1;
            int num = n;
            while(num){
                int rem = num%10;
                prod = prod*rem;
                num = num/10;

            }
            if(prod%t == 0){
                divisible = true;

            }
            else{
                n++;
            }
        }
        
    
        return n;
    }
};