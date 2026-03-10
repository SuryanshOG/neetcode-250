#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> nums = {1,4,1,2};
    int n = nums.size();
    vector<int> ans(2 * n, 0);
    for(int i = 0; i < nums.size(); i++) {
        ans[i] = nums[i];
        ans[i + n] = nums[i];
    }
    return 0;
}