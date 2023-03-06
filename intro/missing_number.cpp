#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
  ll n, a;
  cin >> n;
  ll s = n * (n + 1) / 2;
  while (cin >> a) {
    s -= a;
  }
  cout << s; 
}