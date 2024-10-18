#include <iostream>
using namespace std;

bool isMultiple(int a, int b);

int main() {
    cout << "2021305082 최재륜\n";

    int a, b;
    cout << "두 개의 정수를 입력하세요>>";
    cin >> a >> b;

    if (isMultiple(a, b))
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}
bool isMultiple(int a, int b) {
    if (b % a == 0) return true;
    else return false;
}
