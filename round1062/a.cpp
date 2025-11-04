#include "iostream"
using namespace std;

void solve() {
  int a, b, c, d;

  cin >> a >> b >> c >> d;

  if (b != a || a != c || a != d || b != c || d != b || c != d)
    return void(cout << "NO" << '\n');

  cout << "YES" << '\n';
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
