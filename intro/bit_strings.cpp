#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll MOD = 1000000007;

int main() {
    int n;
    cin >> n;
    if (!n) {
        cout << "0\n";
    }
    ll count=1;
    while (n > 0){
        count = count * 2 % MOD;
        n--;
    }
    cout << count << "\n";
}