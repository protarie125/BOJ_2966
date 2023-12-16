#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;
using vs = vector<string>;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  string p1 = "ABC";
  string p2 = "BABC";
  string p3 = "CCAABB";

  int n;
  cin >> n;

  string s;
  cin >> s;

  auto ans = vs{};

  auto a1 = 0;
  auto a2 = 0;
  auto a3 = 0;

  auto j1 = 0;
  auto j2 = 0;
  auto j3 = 0;

  for (auto i = 0; i < s.length(); ++i) {
    if (p1.length() == j1) {
      j1 = 0;
    }

    if (p2.length() == j2) {
      j2 = 0;
    }

    if (p3.length() == j3) {
      j3 = 0;
    }

    if (s[i] == p1[j1]) {
      ++a1;
    }

    if (s[i] == p2[j2]) {
      ++a2;
    }

    if (s[i] == p3[j3]) {
      ++a3;
    }

    ++j1;
    ++j2;
    ++j3;
  }

  auto mx = max(a1, a2);
  mx = max(mx, a3);

  if (mx == a1) {
    ans.push_back("Adrian");
  }

  if (mx == a2) {
    ans.push_back("Bruno");
  }

  if (mx == a3) {
    ans.push_back("Goran");
  }

  cout << mx << '\n';
  for (const auto& x : ans) {
    cout << x << '\n';
  }

  return 0;
}