// Correct
#include <iostream>
#include <string>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == 'Q') {
            a--;
        } else {
            a++;
        }
        if (a < 0) {
            cout << "No\n";
            return;
        }
    }

    cout << "Yes\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}