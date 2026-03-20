#include <iostream>
#include <string>

using namespace std;

string compressString(string s) {
    int n = s.length();
    if (n == 0) return "";

    string compressed = "";

    for (int i = 0; i < n; i++) {
        int count = 1;
        
        // Count consecutive occurrences
        while (i < n - 1 && s[i] == s[i + 1]) {
            count++;
            i++;
        }

        // Append character
        compressed += s[i];

        // Append count only if it's greater than 1
        if (count > 1) {
            compressed += to_string(count);
        }
    }

    return compressed;
}

int main() {
    string s;
    if (!(cin >> s)) return 0;

    cout << compressString(s) << endl;

    return 0;
}
//input : aaabbccds
//output : a3b2c2ds