// Correct
#include <iostream>
#include <string>

using namespace std;

int val(char c) {
    if (c == 'S')
        return 1;
    else if (c == 'M')
        return 2;
    return 3;
}

void solve() {
    string a, b;
    cin >> a >> b;
    int diff = val(a.back()) - val(b.back());
    int ans;
    if (diff == 0) {
        if (a.length() == b.length())
            ans = 0;
        else {
            ans = a.length() < b.length() ? -1 : 1;
            if (a.back() == 'S') ans *= -1;
        }
    } else {
        ans = diff < 0 ? -1 : 1;
    }
    cout << (ans == 0 ? "=" : (ans == -1 ? "<" : ">")) << '\n';
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        solve();
    }
}