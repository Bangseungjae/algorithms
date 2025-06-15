//
// Created by 방승재 on 25. 6. 15.
//
#include <bits/stdc++.h>

using namespace std;

struct Cmp {
    bool operator()(const string& a, const string& b) const {
        if (a.size() != b.size()) return a.size() > b.size();
        return a > b;
    }
};


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    unordered_set<string> seen;
    priority_queue<string, vector<string>, Cmp> pq;

    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        if (seen.emplace(s).second) pq.push(s);
    }

    while (!pq.empty()) {
        cout << pq.top() << '\n';
        pq.pop();
    }
}
