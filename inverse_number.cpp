#include <iostream>
#include <cmath>
using namespace std;

int inverseNumber(int n) {
    int pos = 1;
    int inv = 0;

    while (n > 0) {
        int dig = n % 10;

        inv += pos * pow(10, dig - 1);

        n /= 10;
        pos++;
    }

    return inv;
}

int main() {
    int n;
    cin >> n;


    cout << inverseNumber(n);

    return 0;
}