class RecentCounter {
    queue<int> q;

public:
    RecentCounter() {
        
    }
    
    int ping(int t) {
        int min = t - 3000;
        while(!q.empty() && min > q.front()){
            q.pop();
        }
        q.push(t);
        
        return  q.size();
        
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */