class LRUCache {
public:
    int cap;
    unordered_map <int , list< pair<int,int> >::iterator > m;
    list< pair<int,int> > lru;
    LRUCache(int capacity) {
        cap = capacity;
    }
    
    int get(int key) {
        auto it = m.find(key);
        if(it!=m.end())
        {
            lru.splice(lru.begin(),lru,it->second);
            return it->second->second;
        }
        return -1;
    }
    
    void put(int key, int value) {
        auto it = m.find(key);
        if(it!=m.end())
        {
            lru.splice(lru.begin(),lru,it->second);
            it->second->second = value;
            return ;
        }

        lru.push_front(make_pair(key,value));
        m[key] = lru.begin();
        if(m.size()>cap)
        {
            m.erase(lru.back().first);
            lru.pop_back();
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */