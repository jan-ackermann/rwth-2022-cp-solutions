#include <bits/stdc++.h>
using namespace std;

int N, S;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> N >> S;

    int a;
    for(int i = 0; i < N; i++) {
        cin >> a;
        cout << S - a << "";
        if(i != N - 1) cout << ' ';
    }

    cout << "\n";
    return 0;
}