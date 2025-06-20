//
// Created by 방승재 on 2025. 6. 21..
//

#include <iostream>
#include <queue>

using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<>> pq;
    int x;

    while (n--) {
        cin >> x;
        if (x == 0) {
            if (pq.empty()) cout << 0 << '\n';
            else {
                cout << pq.top() << '\n'; pq.pop();
            }
        } else {
            pq.push(x);
        }
    }
}