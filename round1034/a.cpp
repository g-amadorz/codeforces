#include "iostream"
using namespace std;

void solve() {
  int n;
  cin >> n;

  if (n % 4 == 0) {
    return void(cout << "BOB" << '\n');
  }

  cout << "ALICE" << '\n';
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
