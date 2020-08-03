#include<bits/stdc++.h>

using namespace std;

void run_test(){
    int n;
    cin>>n;
    string f[n],l[n];
    int temp[n]={0};

    for(int i=0;i<n;i++)
        cin>>f[i]>>l[i];
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(f[i]==f[j]){
                temp[i] =1;
                temp[j] =1;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(temp[i]==1) cout<<f[i]<<" "<<l[i]<<"\n";
        else cout<<f[i]<<"\n";
    }


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