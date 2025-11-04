#include "iostream"
#include <algorithm>
#include <vector>
using namespace std;
void solve() {
  int n, j, k;

  cin >> n >> j >> k;

  vector<int> a(n);

  for (auto &i : a) {
    cin >> i;
  }

  int max = *max_element(a.begin(), a.end());

  if (k > 1 || a[j - 1] == max) {
    return void(cout << "YES" << '\n');
  }

  cout << "NO" << '\n';
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
