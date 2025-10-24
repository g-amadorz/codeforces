#include "iostream"
using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;

  if (k == (n * n) - 1)
    return void(cout << "NO" << '\n');

  cout << "YES" << '\n';

  for (int i = 0; i < n; i++) {

    string s = "";

    for (int l = 0; l < n; l++) {
      if (k > 0) {
        s += "U";
        k--;
      } else if (i != n - 1) {
        s += "D";
      } else if (l == n - 1 && i == n - 1) {
        s += "L";
      } else {
        s += "R";
      }
    }
    cout << s << '\n';
  }
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
