#include <iostream>
#include <string>

using namespace std;

// Function to remove consecutive duplicates
string removeConsecutiveDuplicates(string s) {
    int n = s.length();
    
    // If the string is empty or has only one character, no duplicates possible
    if (n <= 1) {
        return s;
    }

    string result = "";
    
    // Iterate through the string
    for (int i = 0; i < n; i++) {
        // Only add the character if it's the first one 
        // OR if it's different from the previous character
        if (i == 0 || s[i] != s[i - 1]) {
            result += s[i];
        }
    }
    
    return result;
}

int main() {
    string s;
    // Taking the entire line as input
    getline(cin, s);

    // Call the function and print the returned value
    string finalAns = removeConsecutiveDuplicates(s);
    cout << finalAns << endl;

    return 0;
}
//input:aabccba
//output:abcba