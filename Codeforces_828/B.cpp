// Correct
#include <iostream>

using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;
    int odd = 0, even = 0;
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        sum += tmp;
        if (tmp & 1)
            odd++;
        else
            even++;
    }
    for (int i = 0; i < q; i++) {
        int a, b;
        cin >> a >> b;
        if (a == 0) {
            sum += even * b;
            // switch signs
            if (b & 1) {
                odd += even;
                even = 0;
            }
        } else {
            sum += odd * b;
            // switch signs
            if (b & 1) {
                even += odd;
                odd = 0;
            }
        }
        cout << sum << '\n';
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}