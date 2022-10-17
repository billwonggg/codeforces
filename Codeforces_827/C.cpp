// Correct
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve() {
    string s;
    getline(cin, s);
    vector<string> arr;
    for (int i = 0; i < 8; i++) {
        cin >> s;
        arr.push_back(s);
    }
    // vertical
    for (int i = 0; i < 8; i++) {
        int b = 0;
        for (int j = 0; j < 8; j++) {
            if (arr[j][i] == 'B') b++;
        }
        if (b == 8) {
            cout << "B\n";
            return;
        }
    }
    // horizontal
    for (int i = 0; i < 8; i++) {
        int r = 0;
        for (int j = 0; j < 8; j++) {
            if (arr[i][j] == 'R') r++;
        }
        if (r == 8) {
            cout << "R\n";
            return;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}