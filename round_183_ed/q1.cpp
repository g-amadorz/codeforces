#include "iostream"
using namespace std;

void solve() {
  int n;
  cin >> n;

  if (n % 3) {
    cout << (3 - (n % 3)) << endl;
  } else {
    cout << 0 << endl;
  }
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
