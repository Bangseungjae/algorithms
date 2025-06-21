//
// Created by 방승재 on 2025. 6. 21..
//

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    int maxDP[3];
    int minDP[3];
    int temp_0, temp_2;
    int input[3];
    cin >> input[0] >> input[1] >> input[2];
    maxDP[0] = input[0]; maxDP[1] = input[1]; maxDP[2] = input[2];
    minDP[0] = input[0]; minDP[1] = input[1]; minDP[2] = input[2];
    for (int i = 0; i < n-1; ++i) {
        cin >> input[0] >> input[1] >> input[2];
        temp_0 = maxDP[0];
        temp_2 = maxDP[2];
        maxDP[0] = max(maxDP[0], maxDP[1]) + input[0];
        maxDP[2] = max(maxDP[1], maxDP[2]) + input[2];
        maxDP[1] = max(max(temp_0, maxDP[1]), temp_2) + input[1];

        temp_0 = minDP[0];
        temp_2 = minDP[2];
        minDP[0] = min(minDP[0], minDP[1]) + input[0];
        minDP[2] = min(minDP[1], minDP[2]) + input[2];
        minDP[1] = min(min(temp_0, minDP[1]), temp_2) + input[1];
    }

    cout << max(max(maxDP[0], maxDP[1]), maxDP[2]) << ' ' << min(min(minDP[0], minDP[1]), minDP[2]) << '\n';
}