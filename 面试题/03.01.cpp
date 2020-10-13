class TripleInOne {
public:
    int *s;
    int length[3];
    int size;
    TripleInOne(int stackSize) {
        size=stackSize;
        s = new int[3*size];
        length[0]=0;length[1]=0;length[2]=0;
    }
    
    void push(int stackNum, int value) {
        if(length[stackNum]==size) return;
        s[stackNum*size+(length[stackNum]++)] = value;
    }
    
    int pop(int stackNum) {
        if(length[stackNum]==0) return -1;
        return s[stackNum*size+(--length[stackNum])];
    }
    
    int peek(int stackNum) {
        if(length[stackNum]==0) return -1;
        return s[stackNum*size+(length[stackNum]-1)];
    }
    
    bool isEmpty(int stackNum) {
        return length[stackNum]==0;
    }
};

/**
 * Your TripleInOne object will be instantiated and called as such:
 * TripleInOne* obj = new TripleInOne(stackSize);
 * obj->push(stackNum,value);
 * int param_2 = obj->pop(stackNum);
 * int param_3 = obj->peek(stackNum);
 * bool param_4 = obj->isEmpty(stackNum);
 */