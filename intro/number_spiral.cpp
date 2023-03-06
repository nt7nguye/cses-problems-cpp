#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
  int tests; 
  cin >> tests;
  while (tests--) { 
    ll r, c, ans;
    cin >> r >> c;
    if (r > c) {
      if (r%2==0){
        ans=r*r-c+1;
      } else {
        ans=(r-1)*(r-1) + c;
      }
    } else {
      if (c%2==0){ 
        ans=(c-1)*(c-1)+r;
      } else {
        ans=c*c-r+1;
      }
    }
    cout << ans << "\n";
  }
}