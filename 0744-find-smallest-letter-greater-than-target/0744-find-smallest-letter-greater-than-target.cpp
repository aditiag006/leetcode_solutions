class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        //O(n)
        // for(int i = 0; i < letters.size(); i++){
        //     if(letters[i] > target){
        //         return letters[i];
        //     }
        // }
        // return letters[0];


        int start = 0 ;
        int end = letters.size() - 1;
        int ans = -1;

        while(start <= end){
            int mid = start + (end - start)/2;

            if(letters[mid] > target){
                ans = mid;
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }

        if(ans == -1) return letters[0];

        return letters[ans];
        
    }
};