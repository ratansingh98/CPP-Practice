#include<bits/stdc++.h>

using namespace std;

void run_test(){


}
int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int64_t k,n,w,money=0;    
    cin>>k>>n>>w;
    
    for(int i=1;i<=w;i++){
        money +=i*k;
    }
    if (money>n) cout<<money-n;
    else cout<<0;
    return 0;
}