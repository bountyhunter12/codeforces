#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        vector<int> sorted_a;
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sorted_a.push_back(a[i]);
        }

        sort(sorted_a.begin(), sorted_a.end());

        int left = 0, right = n - 1;

        // Find the leftmost index of mismatch
        while (left < n && a[left] == sorted_a[left]) {
            left++;
        }

        // Find the rightmost index of mismatch
        while (right >= 0 && a[right] == sorted_a[right]) {
            right--;
        }

        // Calculate the length of the unsorted subarray
        int unsorted_length = max(0, right - left + 1);

        cout << unsorted_length << endl;
    }

    return 0;
}
