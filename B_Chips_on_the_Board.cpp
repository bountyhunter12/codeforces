#include <bits/stdc++.h>
using namespace std;

bool isNumber(const string &s) {
    for (char c : s) {
        if (!isdigit(c)) {
            return false;
        }
    }
    return true;
}

bool is(string s) {
    if (s[0] != '1' && s[0] != '2' && s[0] != '3' && s[0] != '4' && s[0] != '5' && s[0] != '6' && s[0] != '7' && s[0] != '8' && s[0] != '9') {
        return false;
    }
    return true;
}

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    vector<int> v;
    int c = 0;
    string s;
    int flag = 0;

    while (cin >> s) {
        if (is(s) == false) {
            flag = 1;
            break;
        }

        if (isNumber(s) == false) {
            flag = 1;
            break;
        }

        int x = stoi(s);
        v.push_back(x);
    }

    if (v.size() == 3) {
        int u, v1, o;
        u = v[0];
        v1 = v[1];
        o = v[2];

        if (isPrime(v1) == false || isPrime(o) == false) {
            flag = 1;
        }

        if (v[0] != v[1] + v[2] || v[1] < 2 || v[2] < 2 || v[0] <= 3 || v[0] % 2 == 1 || v[0] > 1000000000) {
            flag = 1;
        }

        if (flag == 1) {
            c = 0;
        } else {
            c = 1;
        }
    }

    cout << c << endl;

    return 0;
}