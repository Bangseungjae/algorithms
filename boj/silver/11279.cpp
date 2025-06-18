//
// Created by 방승재 on 2025. 6. 18..
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio();
    cin.tie(nullptr);
    int n;
    cin >> n;

    priority_queue<int> pq;
    int x;
    while (n--) {
        cin >> x;
        if (x == 0) {
            if (pq.empty()) {
                cout << "0\n";
            } else {
                cout << pq.top() << "\n";
                pq.pop();
            }
        } else {
            pq.push(x);
        }
    }
}