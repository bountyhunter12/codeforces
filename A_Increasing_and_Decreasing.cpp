#include <iostream>
#include <vector>

using namespace std;

vector<int> constructArray(int x, int y, int n) {
    if ((y - x) < n - 1 || (y - x) % (n - 1) != 0) {
        return vector<int>();
    }

    int d = (y - x) / (n - 1);
    vector<int> a;
    a.push_back(x);
    for (int i = 1; i < n; ++i) {
        x += d;
        a.push_back(x);
    }

    return a;
}

int main() {
    int t; // Number of test cases
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int x, y, n;
        cin >> x >> y >> n;
        vector<int> result = constructArray(x, y, n);

        if (result.empty()) {
            cout << "-1" << endl;
        } else {
            for (int num : result) {
                cout << num << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
