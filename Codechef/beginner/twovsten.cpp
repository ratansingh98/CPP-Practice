#include<bits/stdc++.h>

using namespace std;

void run_test(){
    int n;
    cin>>n;
    if(n%10==0) cout<<"0\n";
    else if(n%5!=0) cout<<"-1\n";
    else cout<<"1\n";
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    uint16_t t;
        
    cin>>t;
    while(t--){
        run_test();
    }
    return 0;
}