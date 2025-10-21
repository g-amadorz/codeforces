#include "iostream"
#include <bits/stdc++.h>
using namespace std;
void solve() {
  int k, n;

  string s;

  cin >> n >> k >> s;

  int a = count(s.begin(), s.end(), '0');
  int b = count(s.begin(), s.end(), '1');
  int c = count(s.begin(), s.end(), '2');

  string ans(n, '+');

  for (int i = 0; i < n; i++) {

    if (i < a + c || i >= n - b - c)
      ans[i] = '?';

    if (i < a || k == n || i >= n - b)
      ans[i] = '-';
  }

  cout << ans << endl;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
