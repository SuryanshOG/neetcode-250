#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> nums = {5,2,3,2,2,2,2,5,5,5};
    //Using Boyer-Moore Majority Vote Algorithm Extended Version
    int count1 = 0;
    int count2 = 0;
    int candidate1 = 0;
    int candidate2 = 1;
    for (int i : nums) {
        if (i == candidate1) {
            count1++;
        } else if (i == candidate2) {
            count2++;
        } else if (count1 == 0) {
            candidate1 = i;
            count1 = 1;
        } else if (count2 == 0) {
            candidate2 = i;
            count2 = 1;
        } else {
            count1--;
            count2--;
        }
    }
    count1 = 0;
    count2 = 0;
    for (int i : nums) {
        if (i == candidate1) count1++;
        if (i == candidate2) count2++;
    }
    vector<int> ans;
    if (count1 > nums.size() / 3) ans.push_back(candidate1);
    if (count2 > nums.size() / 3) ans.push_back(candidate2);
    for (int i : ans) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}