#include <bits/stdc++.h>
using namespace std;
class myhashmap{
private:
    vector<int> hashmap;
public:
    myhashmap() : hashmap(1000000, -1){}
    void put(int key, int value) {
        hashmap[key] = value;
    }
    int get(int key){
        return hashmap[key];
    }
    void remove(int key) {
        hashmap[key] = -1;
    }
};