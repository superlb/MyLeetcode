class MaxQueue {
public:
    deque<int> q1,q2;
    MaxQueue() {

    }
    
    int max_value() {
        if(q1.empty()) return -1;
        return q2.front();
    }
    
    void push_back(int value) {
        q1.push_back(value);
        while(!q2.empty() && value > q2.back())
            q2.pop_back();
        q2.push_back(value);
    }
    
    int pop_front() {
        if(q1.empty()) return -1;
        int a = q1.front();
        q1.pop_front();
        if(a==q2.front())
            q2.pop_front();
        return a;
    }
};

/**
 * Your MaxQueue object will be instantiated and called as such:
 * MaxQueue* obj = new MaxQueue();
 * int param_1 = obj->max_value();
 * obj->push_back(value);
 * int param_3 = obj->pop_front();
 */