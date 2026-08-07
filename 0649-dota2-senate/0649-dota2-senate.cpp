class Solution {
public:
    string predictPartyVictory(string senate) {

        queue<int> R;
        queue<int> D;

        int cnt = 0;
        for(int i = 0; i < senate.size(); i++){
            if(senate[i] == 'R'){
                R.push(cnt);
            }else{
                D.push(cnt);
            }
            cnt++;
        }

        while(!R.empty() && !D.empty()){
            int rfront = R.front();
            int dfront = D.front();
            R.pop();
            D.pop();
            if(rfront < dfront){
                R.push(cnt);
            }
            else{
                D.push(cnt);
            }
            cnt++;
        }

        if(D.empty()){
            return "Radiant";
        }
        else{
            return "Dire";
        }
        
    }
};