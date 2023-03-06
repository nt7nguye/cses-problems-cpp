#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll MOD = 1000000007;

int main() {
    int n;
    cin >> n;
    int count_5 = 0;
    while (n) {
        int tmp=n;
        while(tmp%5==0){
            count_5++;
            tmp/=5;
        }
        --n;
    }
    cout << count_5 << "\n"; 
}