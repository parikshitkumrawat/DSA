#include <iostream>
#include <string>

using namespace std;

void compressString(string s) {
    int n = s.length();
    if (n == 0) return;

    for (int i = 0; i < n; i++) {
        // Count occurrences of the current character
        int count = 1;
        while (i < n - 1 && s[i] == s[i + 1]) {
            count++;
            i++;
        }
        
        // Print character followed by its consecutive count
        cout << s[i] << count;
    }
    cout << endl;
}

int main() {
    string s;
    if (!(cin >> s)) return 0; // Handle empty input
    
    compressString(s);
    
    return 0;
}
//input : aaabbccdsaa
//output : a3b2c2d1s1a2