//
// Created by 방승재 on 2025. 6. 20..
//
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int M, N;
    cin >> M >> N;
    vector<vector<int>> box(N, vector<int>(M));
    queue<pair<int, int>> q;
    int fresh = 0;

    for (int r = 0; r < N; ++r) {
        for (int c = 0; c < M; ++c) {
            cin >> box[r][c];
            if (box[r][c] == 1) q.emplace(r, c);
            else if (box[r][c] == 0) fresh++;
        }
    }
    if (fresh == 0) {
        cout << 0 << '\n'; return 0;
    }

    int days=0;
    while (!q.empty()) {
        auto [r, c] = q.front(); q.pop();
        for (int d = 0; d < 4; ++d) {
            int nr = r + dx[d], nc = c + dy[d];
            if (nr < 0 || nr >= N || nc < 0 || nc >= M || box[nr][nc] != 0) continue;
            box[nr][nc] = box[r][c] + 1;
            fresh--;
            days = max(days, box[nr][nc]);
            q.emplace(nr, nc);
        }
    }
    cout << (fresh ? -1 : days - 1) << '\n';
}
