class MyHashSet {
public:
    set<int>s;
    MyHashSet() {
        
    }
    
    void add(int key) {
     s.insert(key);   
    }
    
    void remove(int key) {
       s.erase(key); 
    }
    
    bool contains(int key) {
      if(s.find(key)!=s.end()){
          return true;
      }  
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
// class MyHashSet {
// set Set;
// public:
// MyHashSet() {
// }

// void add(int key) {
//     Set.insert(key);
// }

// void remove(int key) {
//     Set.erase(key);
// }

// bool contains(int key) {
//      if (Set.find(key) != Set.end())
//       return 1;
//     else
//        return 0;
// }
// };