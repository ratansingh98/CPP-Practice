#include<bits/stdc++.h>

using namespace std;


void run_test(){
    
    int n,k;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        a[i]=i+1;
    
    for(int i=0;i<n-1;i+=2){
            k=a[i];
            a[i]=a[i+1];
            a[i+1]=k;
        }
        if(n%2!=0)
        {
            k=a[n-2];
            a[n-2]=a[n-1];
            a[n-1]=k;
        }
    for(int i:a)
        cout<<i<<" ";
    cout<<"\n";

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