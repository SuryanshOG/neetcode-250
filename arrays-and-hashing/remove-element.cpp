#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> nums = {1,1,2,3,4};
    int val = 1;
    int k = 0;
    for (int i : nums) {
        if (i != val) {
            nums[k++] = i;
        }
    }
    cout << k << endl;
    return 0;
}