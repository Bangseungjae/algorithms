//
// Created by 방승재 on 2025. 6. 20..
//
/**
 *
1 X: 정수 X를 스택에 넣는다. (1 ≤ X ≤ 100,000)
2: 스택에 정수가 있다면 맨 위의 정수를 빼고 출력한다. 없다면 -1을 대신 출력한다.
3: 스택에 들어있는 정수의 개수를 출력한다.
4: 스택이 비어있으면 1, 아니면 0을 출력한다.
5: 스택에 정수가 있다면 맨 위의 정수를 출력한다. 없다면 -1을 대신 출력한다.
 */
#include <iostream>
#include <stack>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int inst;
    int v;
    stack<int> stack;
    while (n--) {
        cin >> inst;
        if (inst == 1) {
            cin >> v;
            stack.push(v);
        } else if (inst == 2) {
            if (stack.empty()) {
                cout << "-1\n";
            } else {
                cout << stack.top() << "\n";
                stack.pop();
            }
        } else if (inst == 3) {
            cout << stack.size() << '\n';
        } else if (inst == 4) {
            if (stack.empty()) cout << "1\n";
            else cout << "0\n";
        } else {
            if (stack.empty()) cout << "-1\n";
            else cout << stack.top() << '\n';
        }
    }
}