class MyHashSet {
public:
    vector<int> s;
    MyHashSet() {
        // BOTTLENECK - We can make vector upto range 10^7 size
        int size = 10e6+1;
        s.resize(size);
        fill(s.begin(), s.end(), 0);
    }
    
    void add(int key) {
        s[key]=1;
    }
    
    void remove(int key) {
        s[key]=0;
    }
    
    bool contains(int key) {
        if(s[key]==1)
            return true;
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */