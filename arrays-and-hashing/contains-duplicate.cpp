#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> nums = {1,2,3,3};
    unordered_set<int> s;
    for (int i : nums) {
        if (s.count(i)) {
            cout << "true" << endl;
            return 0;
        }
        s.insert(i);
    }
    cout << "false" << endl;
    return 0;
}