#include <iostream>
using namespace std;

int main() {
    int N ;
    cin>>N;

    for (int i = 1; i <= N; i++) {
        // Left side numbers
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        // Spaces in middle
        for (int s = 1; s <= 2 * (N - i); s++) {
            cout << "  ";
        }

        // Right side numbers
        for (int j = i-1; j >= 1+i; j--) {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}