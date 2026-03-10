#include <bits/stdc++.h>
using namespace std;
int main() {
    // Boyer-Moore Majority Vote Algorithm
    vector<int> nums = {5,5,1,1,1,5,5};
    int count = 0;
    int candidate = 0;
    for (int i : nums) {
        if(count == 0) {
            candidate = i;
        }
        if (i == candidate) {
            count++;
        } 
        if (i != candidate) {
            count--;
        }
    }
    cout << candidate << endl;
    return 0;
}