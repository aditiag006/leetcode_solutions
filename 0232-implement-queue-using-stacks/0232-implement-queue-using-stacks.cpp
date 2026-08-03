class MyQueue {
    stack<int> st;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        int n = st.size();
        stack<int> s;

        for(int i = 0; i < n; i++){
            s.push(st.top());
            st.pop();

        }
        st.push(x);

        for(int i = 0; i < n; i++){
            st.push(s.top());
            s.pop();
        }
        
    }
    
    int pop() {
        int ans = st.top();
        st.pop();
        return ans;
        
    }
    
    int peek() {
        return st.top();
        
    }
    
    bool empty() {
        return st.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */