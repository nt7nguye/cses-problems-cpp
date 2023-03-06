#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ll n;
    cin >> n;
    cout << "0\n";
    if (n>1){
        cout <<"6\n";
    }
    for (ll i=3;i<=n;i++){
        // Attack positions = 2x3 or 3x2 blocks selection
        // on a k*k board. Each block actually have 2 attack pos
        ll attacks = (i - 1) * (i - 2) * 2 * 2;
        cout << i*i * (i*i - 1) / 2 - attacks << "\n";
    }
} 