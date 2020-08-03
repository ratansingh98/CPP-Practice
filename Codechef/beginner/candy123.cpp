#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cin.tie(0);
    int t,A,B;
    cin>>t;
    while(t--){
    int A, B;
    cin >> A >> B;
    for (int j = 1; j < 5000; j++) {
    if (j % 2 == 1) {
        A -= j;
        if (A < 0) { cout << "Bob\n"; break; }
        } 
        else {
        B -= j;
        if (B < 0) { cout << "Limak\n"; break; }
        }
    }
    }
    return 0;
}