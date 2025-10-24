#include "iostream"
using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;

  if (k == n * n - 1)
    return void(cout << "NO" << '\n');

  cout << "YES" << '\n';

  vector<vector<int>> grid;

  for (int i = 0; i < k; i++) {
  }
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
