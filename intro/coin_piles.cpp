#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tests;
    cin >> tests;
    for (int t=0;t<tests;t++){
        int a, b;
        cin >> a >> b;
        if ((2*a-b)%3||(2*b-a)%3) {
            cout<<"NO\n";
            continue;
        }
        if ((2*a-b)/3 <0 || (2*b-a)/3 <0){ 
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
} 