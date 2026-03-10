#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> nums = {10,9,1,1,1,2,3,1};
    //Counting Sort
    int maxnum = *max_element(nums.begin(), nums.end());
    vector<int> count(maxnum + 1, 0);
    for (int i : nums) {
        count[i]++;
    }
    int k = 0;
    for (int i = 0; i <= maxnum; i++) {
        while (count[i] > 0) {
            nums[k++] = i;
            count[i]--;
        }
    }
    for (int i : nums) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}