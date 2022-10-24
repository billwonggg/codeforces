// Correct
#include <iostream>
#include <queue>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int& i : arr) {
        cin >> i;
    }
    string s;
    cin >> s;
    vector<char> ans(n, '.');
    for (int i = 0; i < n; i++) {
        if (ans[i] != '.' && ans[i] != s[i]) {
            cout << "NO\n";
            return;
        }
        for (int j = i; j < n; j++) {
            if (arr[j] == arr[i] && ans[j] == '.') {
                ans[j] = s[i];
            }
        }
    }
    cout << "YES\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}