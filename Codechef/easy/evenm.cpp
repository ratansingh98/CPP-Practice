#include<bits/stdc++.h>

using namespace std;

void run_test(){
    int n;
    cin>>n;
    for(int i=0,k=0;i<n*n;i+=n,k++){
        if(k%2==0)
            for(int j=i+1;j<=i+n;j++)
                cout<<j<<" ";    
        else
            for(int j=i+n;j>i;j--)
                cout<<j<<" ";      
        cout<<"\n";
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