#include "iostream"
#include <bits/stdc++.h>
using namespace std;
void solve() {
  int n, k;

  cin >> n >> k;

  string s;

  cin >> s;

  int res = 0;

  int count = k;

  for (int i = 0; i < n; i++) {
    if (count > k - 1 && s[i] == '1') {
      res++;
      count = 0;
    } else if (s[i] == '1') {
      count = 0;
    }
    count++;
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
