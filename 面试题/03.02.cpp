class MinStack {
public:
    /** initialize your data structure here. */
    vector<int> s;
    MinStack() {

    }
    
    void push(int x) {
        if(s.empty())
        {
            s.push_back(x);
            s.push_back(x);
        }
        else
        {
            s.push_back(x);
            s.push_back(min(s[s.size()-2],x));
        }
    }
    
    void pop() {
        s.pop_back();
        s.pop_back();
    }
    
    int top() {
        return s[s.size()-2];
    }
    
    int getMin() {
        return s[s.size()-1];
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */