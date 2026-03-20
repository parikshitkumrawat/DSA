#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve() {
    string s;
    cin >> s;

    // Step 1: Create a frequency array for all 256 ASCII characters
    vector<int> freq(256, 0);

    for (char ch : s) {
        freq[ch]++;
    }

    // Step 2: Traverse the string again to find the first char with count 1
    bool found = false;
    for (char ch : s) {
        if (freq[ch] == 1) {
            cout << ch << endl;
            found = true;
            break;
        }
    }

    // Step 3: If no unique character exists, print -1
    if (!found) {
        cout << -1 << endl;
    }
}

int main() {
    int t;
    // Read the number of test cases
    if (!(cin >> t)) return 0;

    while (t--) {
        solve();
    }

    return 0;
}
//input 4                   //output
//codingblocks              //d 
//abbac                     //c   
//java                      //j
//ccdd                      // -1