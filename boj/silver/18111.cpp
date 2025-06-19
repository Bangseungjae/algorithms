//
// Created by 방승재 on 2025. 6. 20..
//
#include<iostream>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, M, B;
    cin >> N >> M >> B;
    int land[N][M];
    int min_t = 99999999;
    int max_h = 99999999;
    int time = 0;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; j++) {
            cin >> land[i][j];
        }
    }

    for (int h = 0; h < 257; ++h) {
        int remove = 0;
        int stack = 0;

        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                if (land[i][j] == h) continue;
                if (land[i][j] > h) {
                    remove += land[i][j] - h;
                } else {
                    stack += h - land[i][j];
                }
            }
        }
        if (remove + B >= stack) {
            time = 2 * remove + stack;
            if (time <= min_t) {
                min_t = time;
                max_h = h;
            }
        }
    }

    cout << min_t << " " << max_h;
}