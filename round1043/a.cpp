#include "iostream"
using namespace std;

void solve() {
  int n, m;
  string a, b, c;

  cin >> n >> a >> m >> b >> c;

  for (int i = 0; i < c.size(); i++) {
    if (c[i] == 'V') {
      a = string(1, b[i]) + a;
    } else {
      a = a + string(1, b[i]);
    }
  }

  cout << a << '\n';
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
