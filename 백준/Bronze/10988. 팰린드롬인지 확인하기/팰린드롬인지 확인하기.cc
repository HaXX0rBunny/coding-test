#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool is_palindrome(string _str, int start, int end) {

    if (start >= end) {
        return true;
    }

    if (_str[start] != _str[end]) {
        return false;
    }


    // 양 옆의 글자 빼고 비교
    return is_palindrome(_str, start + 1, end - 1);
}

int main() {
    string str;
    cin >> str;
    cout << is_palindrome(str, 0, str.size()-1) << endl; // true

    return 0;
}