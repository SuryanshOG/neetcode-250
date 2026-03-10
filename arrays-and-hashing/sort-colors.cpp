#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> nums = {1,0,1,2};
    //Dutch National Flag Algorithm
    int n = nums.size();
    int low = 0;
    int mid = 0;
    int high = n - 1;
    while (mid <= high) {
        if (nums[mid] == 0) {
            swap(nums[low++], nums[mid++]);
        } else if (nums[mid] == 1) {
            mid++;
        } else {
            swap(nums[mid], nums[high--]);
        }
    }
    for (int i : nums) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}