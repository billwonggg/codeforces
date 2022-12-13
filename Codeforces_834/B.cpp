// Correct
#include <iostream>
#include <unordered_set>

using namespace std;

void solve() {
    int m, s;
    cin >> m >> s;
    unordered_set<int> st;
    for (int i = 0; i < m; i++) {
        int tmp;
        cin >> tmp;
        st.insert(tmp);
    }

    int count = 1;
    while (s > 0 || st.size() > 0) {
        if (st.find(count) == st.end()) {
            s -= count;
        } else {
            st.erase(count);
        }
        count++;
    }
    if (s < 0) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}