//heuristically programmed
//HAL 9000
#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
const int N = 1e5 + 9;
const int INF =1e9+10;

int32_t main() {
    int n, k;
    cin >> n >> k;
    vector<int> flowers(n);

    // Input the initial quantities of pollen grains
    for (int i = 0; i < n; i++) {
        cin >> flowers[i];
    }

    priority_queue<int, vector<int>, less<int>> maxHeap;

    // Initialize the max-heap with the initial quantities of pollen grains
    for (int i = 0; i < n; i++) {
        maxHeap.push(flowers[i]);
    }

    int ans = 0;

    while (k > 0 && !maxHeap.empty()) {
        int max_pollens = maxHeap.top();
        maxHeap.pop();

        int digit_sum = 0;
        int temp = max_pollens;

        // Calculate the sum of digits
        while (temp > 0) {
            digit_sum += temp % 10;
            temp /= 10;
        }

        ans += digit_sum;

        // Update the quantity of pollen grains for the selected flower
        int new_quantity = max_pollens - digit_sum;
        maxHeap.push(new_quantity);

        k--;
    }

    cout << ans << endl;

    return 0;
}







