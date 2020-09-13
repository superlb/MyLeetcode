class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {
        
    }
    stack<int> s;
    void push(int x) {
        if(s.empty())
        {
            s.push(x);
            s.push(x);
        }
        else
        {
            int tmp = s.top();
            if(x<tmp)
            {
                s.push(x);
                s.push(x);
            }
            else
            {
                s.push(x);
                s.push(tmp);
            }
        }
    }
    
    void pop() {
        s.pop();
        s.pop();
    }
    
    int top() {
        int q = s.top();
        s.pop();
        int w = s.top();
        s.push(q);
        return w;
    }
    
    int getMin() {
        return s.top();
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