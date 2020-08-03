#include<iostream>

using namespace std;

int main(){
    int t,n,b,w,h,p,maximum;
    cin>>t;
    while(t--){
        cin>>n>>b;
        maximum=0;
        while(n--){
            cin>>w>>h>>p;
            if(b>=w && b>=h && b>=p)
                if(w*h>maximum) maximum=w*h;
        }
        if(maximum==0) cout<<"no tablet"<<endl;
        else cout<<maximum<<endl;
    }
    return 0;
}