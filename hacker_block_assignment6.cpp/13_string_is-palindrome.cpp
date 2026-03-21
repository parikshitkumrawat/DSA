#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Function to check if a string is a palindrome
bool isPalindrome(string s) {
    int start = 0;
    int end = s.length() - 1;

    while (start < end) {
        // If characters at both ends don't match, it's not a palindrome
        if (s[start] != s[end]) {
            return false;
        }
        // Move pointers towards the center
        start++;
        end--;
    }
    
    return true;
}

int main() {
    string S;
    
    // Taking string input
    if (!(cin >> S)) return 0;

    // Call function and print result based on boolean return
    if (isPalindrome(S)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
// input: abba 
// output: true