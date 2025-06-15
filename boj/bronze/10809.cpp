#include <iostream>
//
// Created by 방승재 on 25. 6. 15.
//

using namespace std;

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    string out;
    for (char ch = 'a'; ch <= 'z'; ++ch)
        out += (s.find(ch) != string::npos ? to_string(s.find(ch)) : "-1") + ' ';
    cout << out << '\n';
}
