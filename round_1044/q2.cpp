#include "iostream"
#include <algorithm>
#include <vector>
using namespace std;
void solve() {
  int n;
  cin >> n;
  vector<int> g(n);
  long long ans = 0;

  for (auto &_ : g)
    cin >> _;

  sort(g.begin(), g.end());

  for (int i = n - 1; i > -1; i -= 2) {
    ans += g[i];
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
