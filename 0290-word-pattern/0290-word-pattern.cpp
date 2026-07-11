class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        string temp ="";

        for(char ch : s){
            if(ch == ' '){
                words.push_back(temp);
                temp = "";
            }
            else{
                temp += ch;
            }

        }
        words.push_back(temp);

        if(words.size() != pattern.size()){
            return false;
        }

        unordered_map<char, string> mp1;
        unordered_map<string, char> mp2;

        for(int i = 0; i < pattern.size(); i++){
            char c = pattern[i];
            string ss = words[i];

            if(mp1.find(c) == mp1.end() && mp2.find(ss) == mp2.end()){
                mp1[c] = ss;
                mp2[ss] = c;
            }
            else{
                if(mp1[c] != ss || mp2[ss] != c){
                    return false;
                }
            }
        }

        return true;
        
    }
};