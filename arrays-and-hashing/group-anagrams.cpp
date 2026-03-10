#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<string> strs = {"act","pots","tops","cat","stop","hat"};
    unordered_map<string, vector<string>> mp;
    for (string s : strs) {
        int freq[26] = {0};
        for (char c : s) {
            freq[c - 'a']++;
        }
        string key = "";
        for (int i : freq) {
            key += to_string(i) + "#";
        }
        mp[key].push_back(s);
    }
    vector<vector<string>> ans;
    for (auto &p : mp) {
        ans.push_back(p.second);
    }
    return 0;
}