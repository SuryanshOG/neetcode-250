#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> nums = {2,20,4,10,3,4,5};
    unordered_set<int>s(nums.begin(), nums.end());
    int ans = 0;
    for (int i : nums) {
        if(s.count(i - 1) == 0) {
            int length = 1;
            int current = i;
            while (s.count(current + 1) == 1) {
                current++;
                length++;
            }
            ans = max(ans, length);
        }
    }
    cout << ans << endl;
    return 0;
}