#include <bits/stdc++.h>
using namespace std;
int main() {
    string s = "carrace";
    string t = "racecar";
    int count[26] = {0};
    for (char c : s) {
        count[c - 'a']++;
    }
    for (char c : t) {
        count[c - 'a']--;
    }
    for (int i : count) {
        if (i != 0) {
            cout << "false" << endl;
            return 0;
        }
    }
    cout << "true" << endl;
    return 0;
}