// Correct
#include <iostream>

using namespace std;

void solve(int n) {
    int diff = n / 2;
    int curr = diff;
    for (int i = 0; i < n - 1; i++) {
        cout << curr << ' ';
        if (i % 2 == 0) {
            curr += diff;
        } else {
            curr -= (diff + 1);
        }
    }
    if (n & 1)
        cout << curr + 2 * diff + 1 << '\n';
    else
        cout << curr << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        solve(n);
    }
}