#include<bits/stdc++.h>

using namespace std;

void run_test(){
    string s;
    int res=0;
    cin>>s;
    for(int i:s){
        if(isdigit(i)) res+=i-'0';
    }
    cout<<res<<"\n";

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    uint16_t t;
    cin>>t;
    while(t--){
        run_test();
    }
    return 0;
}