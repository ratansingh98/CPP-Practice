#include<iostream>

using namespace std;

int main(){
    int t,n,count;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        count =0;
        while(n!=0){
            if(n%10==4)
                count+=1;
            n = n/10;
        }
    cout<<count<<endl;
    }
    return 0;
}