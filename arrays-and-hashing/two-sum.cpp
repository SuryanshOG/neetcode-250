#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> nums = {3,4,5,6};
    int target = 7;
    unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); i++) {
        int compliment = target - nums[i];
        if (mp.count(compliment)) {
            cout << mp[compliment] << " " << i << endl;
            return 0;
        }
        mp[nums[i]] = i;
    }
    cout << "No solution" << endl;
    return 0;
}