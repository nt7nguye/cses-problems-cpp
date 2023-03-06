#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
  char curr, prev;
  ll ans=1, count=1;
  cin >> prev;
  while (cin >> curr){
    if (curr==prev){
      count++;
      ans=max(count, ans);
    } else {
      prev=curr;
      count=1;
    }
  }
  cout << ans;
}