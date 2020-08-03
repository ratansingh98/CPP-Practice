#include<iostream>

using namespace std;

int main(){

    int t,n,res;
    cin>>t;
    for(int i=0;i<t;i++){

        cin>>n;
        res =0;
        for(int i=n;i>0;i-=2){
            res += i*i;
        }
        cout<<res<<endl;

    }


    return 0;
}