class Trie {
public:
    int tot,root;
    vector< vector<int> > child;
    vector<bool> flag;
    vector<int> v;
    /** Initialize your data structure here. */
    Trie() {
        v.resize(128,0);
        child.push_back(v);
        child.push_back(v);
        flag.push_back(false);
        flag.push_back(false);
        root=tot=1;
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        int cur = root;
        int len=word.length();
        int lastcur;
        for(int i=0;i<len;++i)
        {
            lastcur = cur;
            cur=child[cur][word[i]];
            if(cur==0)
            {
                child[lastcur][word[i]] = cur = ++tot;
                child.push_back(v);
                flag.push_back(false);
            }
        }
        flag[cur]=true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        int cur = root;
        int len=word.length();
        for(int i=0;i<len && cur;++i)
        {
            cur=child[cur][word[i]];
        }
        return (cur && flag[cur]);
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        int cur = root;
        int len=prefix.length();
        for(int i=0;i<len && cur;++i)
        {
            cur=child[cur][prefix[i]];
        }
        return cur;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */