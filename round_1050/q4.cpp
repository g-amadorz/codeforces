#include "iostream"
#include <vector>
using namespace std;
#define ll long long
void solve() {
  int n, k;
  cin >> n >> k;
  vector<long long> a(n), cnt(n + 1);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
    cnt[a[i]]++;
  }

  for (auto i : cnt) {
    if (i % k) {
      return void(cout << 0 << endl);
    }
    cnt[i] /= k;
  }

  for (int l = 0; l < n; l++) {
  }
}

int main() {
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
