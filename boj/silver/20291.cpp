//
// Created by 방승재 on 25. 6. 15.
//

#include <iostream>
#include <map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    map<string, int> map;
    string s;
    for (int i = 0; i < n; ++i) {
        cin >> s;
        const unsigned long idx = s.find_last_of('.');
        s = s.substr(idx+1);
        map[s]++;
    }
    for (const auto& [key, value] : map)
        cout << key << ' ' << value << '\n';
}