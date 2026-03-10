#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {1,2,4,6};

    int n = nums.size();
    if (n == 0) return 0;

    vector<int> ans(n, 1);

    int pre = 1;
    for (int i = 1; i < n; i++) {
        pre *= nums[i - 1];
        ans[i] = pre;
    }

    int suf = 1;
    for (int i = n - 2; i >= 0; i--) {
        suf *= nums[i + 1];
        ans[i] *= suf;
    }

    for (int x : ans) cout << x << " ";
}