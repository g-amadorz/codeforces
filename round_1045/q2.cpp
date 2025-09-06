#include "iostream"
#include <vector>
using namespace std;
void solve() {
  int n, k;
  cin >> n >> k;
  vector<long long> a(n);

  for (auto &i : a) {
    cin >> i;
    i += (k * (i % (k + 1)));
  }

  for (auto i : a)
    cout << i << " ";

  cout << endl;
}
int main() {
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
