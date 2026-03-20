#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string s;
    // Using cin >> s because the constraints imply a single word/string
    if (!(cin >> s)) return 0;

    // Frequency array for all ASCII characters
    int freq[256] = {0};

    // Count the occurrences of each character
    for (char c : s) {
        freq[(unsigned char)c]++;
    }

    char maxChar = s[0];
    int maxCount = 0;

    // Iterate through the array to find the character with the highest frequency
    // We check all 256 possible characters
    for (int i = 0; i < 256; i++) {
        if (freq[i] > maxCount) {
            maxCount = freq[i];
            maxChar = (char)i;
        }
    }

    cout << maxChar << endl;

    return 0;
}