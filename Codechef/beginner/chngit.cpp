#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n],count=0,min=0;
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);

        for(int i=0;i<n-1;i++){
            if (a[i]==a[i+1])
                count++;
            else
                count =0;
            if(count>min)
                min =count;

        }
        cout<<n-min-1<<endl;
    }
    return 0;
}