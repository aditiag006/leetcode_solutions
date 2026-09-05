class Solution {
public:

    long long findMax(vector<int>& nums) {
        int n = nums.size();
        long long sum = 0;
        stack<int> st;

        for (int i = 0; i <= n; i++) {

            while (!st.empty() &&
                  (i == n || nums[st.top()] < nums[i])) {

                int mid = st.top();
                st.pop();

                int left = st.empty() ? mid + 1 : mid - st.top();
                int right = i - mid;

                sum += 1LL * nums[mid] * left * right;
            }

            st.push(i);
        }

        return sum;
    }

    long long findMin(vector<int>& nums) {
        int n = nums.size();
        long long sum = 0;
        stack<int> st;

        for (int i = 0; i <= n; i++) {

            while (!st.empty() &&
                  (i == n || nums[st.top()] > nums[i])) {

                int mid = st.top();
                st.pop();

                int left = st.empty() ? mid + 1 : mid - st.top();
                int right = i - mid;

                sum += 1LL * nums[mid] * left * right;
            }

            st.push(i);
        }

        return sum;
    }

    long long subArrayRanges(vector<int>& nums) {
        return findMax(nums) - findMin(nums);
    }
};