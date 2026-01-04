#include "iostream"
#include <vector>
using namespace std;

int k = 54;
vector<bool> is_prime(k + 1, true);

void solve() {
  int n;

  cin >> n;

  vector<long long> a(n);

  for (auto &i : a) {
    cin >> i;
  }

  for (int i = 2; i < k; i++) {
    if (!is_prime[i])
      continue;

    for (auto c : a) {
      if (c % i != 0)
        return void(cout << i << '\n');
    }
  }

  cout << -1 << '\n';
}

int main() {
  int t;
  cin >> t;

  is_prime[0] = is_prime[1] = false;

  for (int i = 2; i <= k; i++) {
    if (is_prime[i] && (long long)i * i <= k) {
      for (int j = i * i; j <= k; j += i)
        is_prime[j] = false;
    }
  }

  while (t--) {
    solve();
  }
}
