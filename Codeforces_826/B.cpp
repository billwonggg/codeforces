// Correct
#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;
    // length 3 is the only edge case
    // all even numbers are ok to print in reverse
    // odd numbers print n .. (n // 2 + 2), then 1 .. (n // 2)
    if (n == 3) {
        cout << -1;
    } else if (n % 2 == 0) {
        for (int i = n; i > 0; i--) {
            cout << i << ' ';
        }
    } else {
        for (int i = n; i >= n / 2 + 2; i--) {
            cout << i << ' ';
        }
        for (int i = 1; i <= n / 2 + 1; i++) {
            cout << i << ' ';
        }
    }
    cout << '\n';
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        solve();
    }
}