//
// Created by 방승재 on 25. 6. 15.
//

#include <iostream>
#include <string>
using namespace std;
typedef long long ll;

int main() {
    ll* arr = new ll[101];
    int n;
    cin >> n;

    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 1;
    arr[3] = 1;
    string s;
    for (int i = 4; i < 101; ++i) {
        arr[i] = arr[i-3] + arr[i-2];
    }

    for (int i = 0; i < n;  i++) {
        int x;
        cin >> x;
        s += to_string(arr[x])+'\n';
    }

    cout << s;
}