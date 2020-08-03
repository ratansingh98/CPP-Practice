#include<iostream>
#define uint16_t int
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,p;
    cin>>t;
    while(t--){
        cin>>n>>p;
        int a[n],sum=0,sum1=0;
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++){
            sum +=a[i];
            if(a[i]>p) sum1 +=p;
            else sum1+=a[i];

        }
        cout<<sum-sum1<<endl;
        
    }

    return 0;
}