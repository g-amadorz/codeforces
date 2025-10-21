#include "iostream"
#include <bits/stdc++.h>
#include <vector>
using namespace std;
void solve() {
  int n;
  cin >> n;

  vector<int> a(n);

  for (auto &i : a) {
    cin >> i;
  }

  int res = 0;

  vector<int> pre(n);

  pre[0] = a[0];

  for (int k = 1; k < n; k++) {
    pre[k] = max(pre[k - 1], a[k]);
  }

  for (int i = 0; i < n; i += 2) {
    int cur = 0;

    if (i > 0) {
      cur = max(cur, a[i] - pre[i - 1] + 1);
    }

    if (i < n - 1) {
      cur = max(cur, a[i] - pre[i + 1] + 1);
    }
    res += cur;
  }

  cout << res << '\n';
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
