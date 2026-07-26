class Solution {
public:

    bool isAlphanumeric(char ch){
        if((ch >=  'a' && ch <= 'z') || (ch >= '0' && ch <= '9')){
            return true;
        }

        return false;
    }
    bool isPalindrome(string s) {

        int i = 0;
        int j = s.length()-1;

        while(i <= j){
            char ch1 = tolower(s[i]);
            char ch2 = tolower(s[j]);
            if(!isAlphanumeric(ch1)){
                i++;
            }
            else if(!isAlphanumeric(ch2)){
                j--;
            }
            else{
                if(ch1 == ch2){
                    i++; j--;
                }
                else{
                    return false;
                }
            }
        }

        return true;
        
    }
};