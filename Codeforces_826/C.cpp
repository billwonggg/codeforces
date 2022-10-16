// Correct
#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int& i : arr) cin >> i;
    // O(n^2) solution
    int segSum = 0;
    int ans = n;
    for (int i = 0; i < n; i++) {
        segSum += arr[i];
        // find valid segments with sum = segSum
        int mxL = i + 1;
        int currL = 1;
        int currSum = 0;
        bool valid = true;
        for (int j = i + 1; j < n; j++) {
            currSum += arr[j];
            if (currSum == segSum) {
                mxL = max(mxL, currL);
                currSum = 0;
                currL = 0;
            } else if (currSum > segSum) {
                valid = false;
                break;
            }
            currL++;
        }

        if (valid && currSum == 0) {
            ans = min(ans, mxL);
        }
    }
    cout << ans << '\n';
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        solve();
    }
}