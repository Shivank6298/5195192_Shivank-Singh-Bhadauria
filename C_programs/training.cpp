#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0; // read number of elements
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    // print even numbers (space separated)
    bool first = true;
    for (int x : a) {
        if (x % 2 == 0) {
            if (!first) cout << ' ';
            cout << x;
            first = false;
        }
    }
    cout << '\n';
    return 0;
}