#include<bits/stdc++.h>

using namespace std;

void run_test(){
    int n,count=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n;i++){
            if(count<a[i]) break;
            count++;
    }
    cout<<count<<"\n";

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