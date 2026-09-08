class Solution {
public:
    int maxDepth(string s) {
        int openbrackets = 0;
        int result = 0;

        for(int i = 0; i < s.length(); i++){
            if(s[i] =='('){
                openbrackets++;
            }else if(s[i] ==')'){
                openbrackets--;
            }

            result = max(result, openbrackets);
        }

        return result;
        
    }
};