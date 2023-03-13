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
    cout << "�п�J�@�Ӿ�ơG";
    cin >> b;
    if (isPrime(b)) {
        cout << b << " �O���" << endl;
    } else {
        cout << b << " ���O���" << endl;
    }
    return 0;
}

