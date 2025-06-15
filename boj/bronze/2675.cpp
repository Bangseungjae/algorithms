//
// Created by 방승재 on 25. 6. 15.
//

#include <bits/stdc++.h>   // <iostream>, <string>, <vector> … 한꺼번에 포함
using namespace std;

int main() {
    ios::sync_with_stdio(false);   // C stdio-동기 끊어서 속도 ↑
    cin.tie(nullptr);              // cout << … 이전에 cin >> 기다리지 않게

    int n;
    if (!(cin >> n)) return 0;     // 첫 줄 : 테스트 케이스 수

    while (n--) {
        int cnt;
        string s;
        cin >> cnt >> s;           // “3 ABC”처럼 공백 없는 문자열이면 >> 만으로 충분

        string out;
        out.reserve(cnt * s.size());          // 미리 공간 확보

        for (char ch : s) {
            out.append(cnt, ch);
        }

        cout << out << '\n';
    }
    return 0;
}
