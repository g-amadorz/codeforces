#include "iostream"
using namespace std;
void solve() {
  int n, m, x, y;
  cin >> n >> m >> x >> y;

  for (int i = 0; i < n + m; i++) {
    int a;
    cin >> a;
  }

  cout << n + m << '\n';
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
