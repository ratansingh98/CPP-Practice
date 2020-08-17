#include<iostream>

using namespace std;



int main(){
    int n=0,k=0,count=0,temp=0;
    cin>>n>>k;
    k=4*60-k;
    for(int i=1;i<=k;i++){
        temp +=5*i;
        if(temp>k)break;
        count++;
    }
    cout<<(int)count;

    return 0;
}