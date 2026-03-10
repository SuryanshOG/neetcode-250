#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<string> strs = {"bat","bag","bank","band"};
    string prefix = "";
    if (strs.empty()) {
        cout << prefix << endl;
        return 0;
    }
    sort(strs.begin(), strs.end());
    for (int i =  0; i < min(strs[0].size(), strs.back().size()); i++) {
        if (strs[0][i] == strs.back()[i]) {
            prefix += strs[0][i];
        } else {
            cout << prefix << endl;
            return 0;
        }
    }
}