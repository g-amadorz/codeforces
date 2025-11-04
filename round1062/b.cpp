#include "iostream"
#include <map>
using namespace std;

void solve() {
  int n;
  string s, t;

  cin >> n >> s >> t;

  map<char, int> cnts;
  map<char, int> cntt;

  for (int i = 0; i < n; i++) {
    if (!cnts[s[i]])
      cnts[s[i]] = 0;

    if (!cntt[t[i]])
      cntt[t[i]] = 0;

    cntt[t[i]]++;
    cnts[s[i]]++;
  }

  if (cntt.size() != cnts.size()) {
    return void(cout << "NO" << '\n');
  }

  for (auto &s : cnts) {
    auto it = cntt.find(s.first);
    if (it == cntt.end() || it->second != s.second) {
      return void(cout << "NO" << '\n');
    }
  }

  cout << "YES" << '\n';
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
