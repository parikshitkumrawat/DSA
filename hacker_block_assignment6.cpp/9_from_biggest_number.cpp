#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// Custom comparator to decide which string combination is larger
bool compareStrings(string a, string b) {
    return a + b > b + a;
}

void solve() {
    int n;
    cin >> n;
    vector<string> arr(n);
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sort using the custom logic
    sort(arr.begin(), arr.end(), compareStrings);

    // If the largest number is "0", the whole result is "0"
    if (arr[0] == "0") {
        cout << "0" << endl;
        return;
    }

    // Print the concatenated strings
    for (string s : arr) {
        cout << s;
    }
    cout << endl;
}

int main() {
    int t;
    // Handling multiple test cases
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
} //input : 1                  //output :6054854654
         // 4
         // 54 546 548 60