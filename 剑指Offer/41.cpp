class MedianFinder {
public:
    priority_queue<int> q1;
    priority_queue<int,vector<int>,greater<int> > q2;
    /** initialize your data structure here. */
    MedianFinder() {

    }
    
    void addNum(int num) {
        q1.push(num);
        q2.push(q1.top());
        q1.pop();
        if(q1.size()+1<q2.size())
        {
            q1.push(q2.top());
            q2.pop();
        }
    }
    
    double findMedian() {
        if(q2.size()>q1.size())
        {
            return (double)q2.top();
        }
        else
        {
            return (q2.top()+q1.top())/2.0;
        }
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */