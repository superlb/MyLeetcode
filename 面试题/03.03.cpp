class StackOfPlates {
public:
    vector<stack<int>> v;
    int ssize;
    StackOfPlates(int cap) {
        ssize = cap;
    }
    
    void push(int val) {
        if(ssize==0) return;
        if(v.empty() || (*v.rbegin()).size()==ssize)
        {
            stack<int> s;
            v.push_back(s);
        }
        (*v.rbegin()).push(val);
    }
    
    int pop() {
        if(v.empty())
            return -1;
        int a = (*v.rbegin()).top();
        (*v.rbegin()).pop();
        if((*v.rbegin()).empty())
            v.pop_back();
        return a;
    }
    
    int popAt(int index) {
        if(v.size()<=index)
            return -1;
        int a = (*(v.begin()+index)).top();
        (*(v.begin()+index)).pop();
        if((*(v.begin()+index)).empty())
            v.erase(v.begin()+index);
        return a;
    }
};

/**
 * Your StackOfPlates object will be instantiated and called as such:
 * StackOfPlates* obj = new StackOfPlates(cap);
 * obj->push(val);
 * int param_2 = obj->pop();
 * int param_3 = obj->popAt(index);
 */