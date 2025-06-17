//
// Created by 방승재 on 2025. 6. 17..
//


#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    int characterReplacement(const string &s, const int k) {
        int freq[26] = {0};   // 대문자 알파벳은 26개이므로 배열이 가장 저렴
        int left = 0, maxCount = 0;

        for (int right = 0; right < s.size(); ++right) {
            int idx = s[right] - 'A';
            maxCount = max(maxCount, ++freq[idx]);      // 윈도우 내 최빈도 즉시 갱신

            // (윈도우 길이 - 최빈도) > k  ➜  교체 횟수 초과 → 왼쪽을 좁힘
            while (right - left + 1 - maxCount > k) {
                --freq[s[left] - 'A'];
                ++left;
            }
        }
        return s.size() - left;
    }
};


int main() {
    string s = "AABABBA";
    int k = 1;
    Solution sol;
    int result = sol.characterReplacement(s, k);

    cout << result << '\n';
    return 0;
}
