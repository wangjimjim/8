#include <iostream>

using namespace std;

bool isPrime(int a) {
    if (a <= 1) {
        return false;
    }
    for (int i = 2; i * i <= a; i++) {
        if (a % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int b;
    cout << "請輸入一個整數：";
    cin >> b;
    if (isPrime(b)) {
        cout << b << " 是質數" << endl;
    } else {
        cout << b << " 不是質數" << endl;
    }
    return 0;
}

