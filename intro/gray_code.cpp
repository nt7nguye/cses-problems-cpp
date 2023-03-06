#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    for(int i=0;i<(1<<n);i++){
        cout << bitset<16>(i).to_string().substr(16-n) << "\n";
    }
}