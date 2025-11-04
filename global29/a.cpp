#include "iostream"
using namespace std;
void solve() {
  int x, y;

  cin >> x >> y;

  if (x < y)
    return void(cout << 2 << '\n');

  if (y > 1 && x - y - 1 > 0)
    return void(cout << 3 << '\n');

  cout << -1 << '\n';
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
