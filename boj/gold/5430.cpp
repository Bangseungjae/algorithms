//
// Created by 방승재 on 2025. 6. 15..
//

#include <iostream>
#include <sstream>
#include <vector>
#include <limits>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    while (n--) {
        string s;
        bool ptr = true;
        cin >> s;
        int cnt;
        cin >> cnt;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        int left = 0;
        int right = cnt - 1;
        vector<int> v;
        string line;
        getline(cin, line);
        for (char &c: line)
            if (!isdigit(c)) c = ' ';
        istringstream ss(line);
        int x;
        while (ss >> x) {
            v.push_back(x);
        }

        bool err = false;
        for (const char &c: s) {
            if (c == 'R') {
                ptr = !ptr;
            } else {
                if (right < left) {
                    err = true;
                    break;
                }
                if (ptr) left++;
                else right--;
            }
        }
        if (err) {
            cout << "error\n";
            continue;
        }
        cout << '[';
        if (left <= right) {
            if (ptr) {
                for (int j = left; j <= right; ++j) {
                    cout << v[j];
                    if (j != right) {
                        cout << ',';
                    }
                }
            } else {
                for (int j = right; j >= left; --j) {
                    cout << v[j];
                    if (j != left)
                        cout << ',';
                }
            }
        }
        cout << "]\n";
    }
}

