#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> nums = {2,-1,1,2};
    int k = 2;
    int prefixsum = 0;
    int ans = 0;
    unordered_map<int, int> mp;
    mp[0] = 1;
    for (int i : nums) {
        prefixsum += i;
        if (mp.find(prefixsum - k) != mp.end()) {
            ans += mp[prefixsum - k];
        }
        mp[prefixsum]++;
    }
    cout << ans << endl;
    return 0;
}