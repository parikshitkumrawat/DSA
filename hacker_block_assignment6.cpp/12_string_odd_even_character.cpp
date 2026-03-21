#include <iostream>
#include <string>

using namespace std;

// Function to transform the string based on ASCII rules
string transformString(string s) {
    for (int i = 0; i < s.length(); i++) {
        if (i % 2 == 0) {
            // Even index: increment ASCII value
            s[i] = s[i] + 1;
        } else {
            // Odd index: decrement ASCII value
            s[i] = s[i] - 1;
        }
    }
    return s;
}

int main() {
    string S;
    
    // Read the input string
    if (!(cin >> S)) return 0;

    // Transform and print the result
    cout << transformString(S) << endl;

    return 0;
} 
//input : abcg
//output : badf