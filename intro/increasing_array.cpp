#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
  int n, x;
  cin >> n;
  int mx=0;
  ll ans=0;
  for(int i=0;i<n;i++){
    cin >> x;
    mx=max(mx, x);
    ans+=mx-x;
  }
  cout << ans;
} 