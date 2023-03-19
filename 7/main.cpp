#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        char op;
        int a, b, c, d;
        cin >> op >> a >> b >> c >> d;
        if (op == '+') {
            cout << a + c << " " << b + d << endl;
        } else if (op == '-') {
            cout << a - c << " " << b - d << endl;
        } else if (op == '*') {
            cout << a * c - b * d << " " << a * d + b * c << endl;
        }
    }
    return 0;
}
