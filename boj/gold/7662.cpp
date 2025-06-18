//
// Created by 방승재 on 2025. 6. 18..
//

#include <bits/stdc++.h>

using namespace std;

multiset<int> ss;

inline void insert(int n) {
    ss.insert(n);
}

inline void clear() {
    ss.clear();
}
inline void delete_min() {
    ss.erase(ss.begin());
}
inline void delete_max() {
    ss.erase(--ss.end());
}

int main() {
    ios::sync_with_stdio();
    cin.tie(nullptr);

    int n;
    int num;
    char cmd;
    cin >> n;

    while (n--) {
        int k;
        cin >> k;
        for (int i = 0; i < k; i++) {
            cin >> cmd >> num;

            if (cmd == 'D') {
                if (ss.empty()) {
                    continue;
                }
                if (num == 1) delete_max();
                else delete_min();
            } else {
                insert(num);
            }
        }
        if (ss.empty()) {
            cout << "EMPTY\n";
        } else {
            cout << *--ss.end()  << " " << *ss.begin() << "\n";
        }
        clear();
    }
}

