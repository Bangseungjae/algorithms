//
// Created by 방승재 on 2025. 6. 22..
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<vector<int>> v(n);
    for (int i = 0; i < n; ++i) {
        v[i].resize(i + 1);
        for (int j = 0; j <= i; ++j) cin >> v[i][j];
    }

    for (int i = n - 2; i >= 0; --i)
        for (int j = 0; j <= i; ++j)
            v[i][j] += max(v[i + 1][j], v[i + 1][j + 1]);

    cout << v[0][0];
}