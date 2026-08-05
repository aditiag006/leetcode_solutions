class Solution {
public:

    int lHist(vector<int> heights){
        int n = heights.size();
        stack<int> st;
        int max_area = 0;
         for(int i = 0; i <= n; i++){

            while(!st.empty() && (i == n || heights[st.top()] >= heights[i])){
                int height = heights[st.top()];
                st.pop();
                int right = i;
                int left = st.empty()? -1: st.top();

                int width = right - left - 1;

                max_area = max(max_area, height*width);
            }

            st.push(i);
         }

         return max_area;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int maxArea = 0;
        vector<vector<int>> psum(n, vector<int>(m, 0));
        
        for(int j = 0; j < m; j++){
            int sum = 0;

            for(int i = 0; i < n; i++){
                if(matrix[i][j] == '1'){
                    sum ++;
                }
                else{
                    sum = 0;
                }

                psum[i][j] = sum;
            }
        }

        for(int i = 0; i < n; i++){
            maxArea = max(maxArea, lHist(psum[i]));
        }

        return maxArea;
    }
};