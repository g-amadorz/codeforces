#include "iostream"
using namespace std;
void solve() {
  int n;
  cin >> n;

  long long ans = 2 * (n - 1);

  cout << ans << '\n';
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
