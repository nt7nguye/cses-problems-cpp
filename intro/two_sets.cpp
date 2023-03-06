#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

// 1, 2, 3, 4, 5, 6, 7, 8
// n%4 == 0 -> easy yes
// n%4 == 2 
int main() {
    int n;
    cin >> n;
    int offset=n%4;
    if (offset==1||offset==2) {
        cout << "NO\n";
        return 0;
    }
    cout << "YES\n";
    vector<int> v1, v2;
    for (int i=0; i<n/4; i++){
        v1.push_back(i*4+1+offset);
        v1.push_back(i*4+4+offset);
        v2.push_back(i*4+2+offset);
        v2.push_back(i*4+3+offset);
    }
    if (offset==3){
        v1.push_back(1);
        v1.push_back(2);
        v2.push_back(3);
    }
    cout << v1.size() << "\n";
    for (int i: v1){
        cout<<i<<" ";
    }
    cout << "\n";
    
    cout << v2.size() << "\n";
    for (int i: v2){
        cout<<i<<" ";
    }
    cout << "\n";
} 