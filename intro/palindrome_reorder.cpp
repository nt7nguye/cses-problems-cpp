#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int alpha[26]={0};
    char ch;
    int odds=0;
    while(cin >> ch){
        odds += (++alpha[ch-'A'])%2?1:-1;
    }
    if (odds>1){
        cout<<"NO SOLUTION\n";
        return 0;
    }
    int odd_index=-1;
    for(int i=0;i<26;i++){
        if (alpha[i]%2==0) {
            for(int j=0;j<alpha[i]/2;j++){
                cout<<(char)('A'+i);
            }
        } else {
            odd_index=i;
        }
    }
    if (odd_index!=-1){
        for(int j=0;j<alpha[odd_index];j++){
            cout<<(char)('A'+odd_index);
        }
        alpha[odd_index]=0;
    }
    for (int i=25;i>-1;i--){
        for(int j=0;j<alpha[i]/2;j++){
            cout<<(char)('A'+i);
        }
    } 
}
