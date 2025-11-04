#include "iostream"
#include <algorithm>
using namespace std;

void solve() {
  int n;
  cin >> n;

  string s;

  cin >> s;

  int res = count(s.begin(), s.end(), '0');

  cout << res << '\n';

  for (int k = 0; k < n; k++) {
    if (s[k] == '0') {
      cout << k + 1 << ' ';
    }
  }

  cout << '\n';
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
