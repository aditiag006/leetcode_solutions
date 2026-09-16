class Solution {
public:

    void shift(int pos, char ch, char dig, string& s){
        ch = ch + (dig - '0');
        s[pos] = ch;
    }


    string replaceDigits(string s) {

        for(int i = 1; i < s.length(); i+=2){
            shift(i, s[i-1], s[i], s);
        }

        return s;
        
    }
};