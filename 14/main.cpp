#include <iostream>
#include <sstream>

using namespace std;

bool isPalindrome(int n) {
    stringstream ss;
    ss << n;
    string str = ss.str();
    int len = str.length();
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "�п�J�@�Ӿ�ơG";
    cin >> n;
    if (isPalindrome(n)) {
        cout << n << " �O�j��" << endl;
    } else {
        cout << n << " ���O�j��" << endl;
    }
    return 0;
}

