#include<iostream>

using namespace std;

int main(){
    int t,n;
    cin>>t;

    while(t--){
        cin>>n;
        int i;
        for(i=0;i<10000;i++){
            if(i*i>n)
                break;
        }
        cout<<i-1<<endl;
    }

    return 0;
}