#include<bits/stdc++.h>

using namespace std;

int sum(int n){
    int sum=0;
    n++;
    while(n--){
        sum+=n;

    }
        

    return  sum;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t,i,n;
    cin>>t;
    while(t--){
        cin>>i>>n;
        while(i--){
            n = sum(n);
            
        }
        cout<<n<<endl;

    }
    return 0;
}