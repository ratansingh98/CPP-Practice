#include<bits/stdc++.h>

using namespace std;

void run_test(){
    int count =0,n;
    int cash[]= {1,2,5,10,50,100};
    cin>>n;
    for(int i=5; i>=0;i--){
            count += n/cash[i];
            n %= cash[i];
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