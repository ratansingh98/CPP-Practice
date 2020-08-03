#include<bits/stdc++.h>

using namespace std;

void run_test(){

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    cout<<a[0]<<"\n";

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