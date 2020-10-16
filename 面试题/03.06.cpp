class AnimalShelf {
public:
    list<vector<int>> l;
    AnimalShelf() {

    }
    
    void enqueue(vector<int> animal) {
        l.push_back(animal);
    }
    
    vector<int> dequeueAny() {
        if(l.empty())
        {
            vector<int> tmp(2,-1);
            return tmp;
        }
        auto a = l.front();
        l.pop_front();
        return a;
    }
    
    vector<int> dequeueDog() {
        for(auto a=l.begin();a!=l.end();++a)
        {
            if((*a)[1]==1)
            {
                auto tmp = *a;
                l.erase(a);
                return tmp;
            }
        }
        vector<int> tmp(2,-1);
        return tmp;
    }
    
    vector<int> dequeueCat() {
        for(auto a=l.begin();a!=l.end();++a)
        {
            if((*a)[1]==0)
            {
                auto tmp = *a;
                l.erase(a);
                return tmp;
            }
        }
        vector<int> tmp(2,-1);
        return tmp;
    }
};

/**
 * Your AnimalShelf object will be instantiated and called as such:
 * AnimalShelf* obj = new AnimalShelf();
 * obj->enqueue(animal);
 * vector<int> param_2 = obj->dequeueAny();
 * vector<int> param_3 = obj->dequeueDog();
 * vector<int> param_4 = obj->dequeueCat();
 */