#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        
        // Initialize counter
        int count = 1;
        
        // Construct the final string by appending s2 to s1[0]
        string result = s1[0] + s2;
        
        // Iterate through the characters of s1 and s2
        for (int i = 1; i < n; i++) {
            // If the current character of s1 is equal to the previous character of s2
            if (s1[i] == s2[i - 1]) {
                count++; // Increment the counter
            } else {
                // If the current character of s1 is '1', break the loop
                if (s1[i] == '1') break;
                else {
                    // Otherwise, update the current character of s2 and reset the counter
                    s2[i - 1] = s1[i];
                    count = 1;
                }
            }
        }
        
        // Output the resulting string and the count
        cout << result << endl;
        cout << count << endl;
    }

    return 0;
}
