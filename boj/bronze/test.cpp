//
// Created by 방승재 on 25. 6. 15.
//

#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    string line;
    getline(cin, line);

    vector<string> tokens;
    stringstream ss(line);
    string token;

    // 3. ','를 기준으로 잘라서 vector에 저장
    while (getline(ss, token, ',')) {  // 세 번째 인자로 구분자 전달
        tokens.push_back(token);
    }

    // 4. vector 순회하면서 출력
    for (const auto& t : tokens) {
        cout << t << '\n';
    }
}
