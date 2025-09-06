#include "iostream"
using namespace std;
void solve() {
  int n, a, b;
  cin >> n >> a >> b;

  if (n % 2 == a % 2) {
    if (n % 2 != b % 2) {
      cout << "NO" << endl;
      return;
    }
    cout << "YES" << endl;
    return;
  }

  if (n % 2 == b % 2 && a < b) {
    cout << "YES" << endl;
    return;
  }

  cout << "NO" << endl;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
