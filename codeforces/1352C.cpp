#include<bits/stdc++.h>

using namespace std;

void run_test(){
    int n,k;
    cin>>n>>k;
    int np = n-1;
    long int rem = k%np;
    int sets= k/np;
    long int res = n*sets -1;
    if(rem>0) res+=rem+1;
    cout<<res<<"\n";

}
int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    uint16_t t=0;
        
    cin>>t;
    while(t--){

        run_test();
    }
    return 0;
}