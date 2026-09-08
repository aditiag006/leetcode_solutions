class Solution {
public:
    typedef pair<char, int> P;
    string frequencySort(string s) {
        vector<P> v(123);

        for(char &ch : s){
            int freq = v[ch].second;
            v[ch] = {ch, freq+1};
        }

        auto lambda = [&](P &p1, P &p2){
            return p1.second > p2.second;
        };

        sort(begin(v), end(v), lambda);

        string res = "";

        for(int i = 0; i < 123; i++){
            if(v[i].second > 0){
                char ch = v[i].first;
                int freq = v[i].second;
                string temp = string(freq, ch);

                res += temp;
            }
        }

        return res;
    }
};