#include <iostream>

using namespace std;

void nhiphan(unsigned int n) {
    if (n <= 1) {
        cout << n%2;
        return;
    }
    nhiphan(n/2);
    cout << n%2;
}

int main() {
    unsigned int n;
    cin >> n;
    nhiphan(n);
    return 0;
}
