#include<bits/stdc++.h>

using namespace std;

void run_test(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int m=-1;
    for(int i=0;i<n-2;i++){
        m= max(a[i],m);
        if(m>a[i+2]) {cout<<"NO\n";  return;}
    }
    cout<<"YES\n";
        

}
int main(){
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    uint16_t t=0;
        
    cin>>t;
    while(t--){

        run_test();
    }
    return 0;
}