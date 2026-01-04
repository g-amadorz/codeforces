#include "iostream"
using namespace std;
void solve() {
  int n;

  cin >> n;

  int count = 0;

  while (n > 2) {
    n--;
    n--;
    count++;
  }

  cout << count << '\n';
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
