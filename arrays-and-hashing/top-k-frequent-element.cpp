#include <bits/stdc++.h>
using namespace std;
int main() {
    //Using Bucket Sort
    vector<int> nums = {1,2,2,3,3,3};
    int k = 2;
    unordered_map<int, int> mp;
    for (int i : nums) {
        mp[i]++;
    }
    vector<vector<int>> buckets(nums.size() + 1);
    for (auto &p : mp) {
        buckets[p.second].push_back(p.first);
    }
    vector<int> ans;
    for (int i = (int)buckets.size() - 1; i >= 0 && ans.size() < k; i--) {
        ans.insert(ans.end(), buckets[i].begin(), buckets[i].end());
    }
    for (int i : ans) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}