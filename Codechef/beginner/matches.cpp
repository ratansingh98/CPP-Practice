#include<iostream>

using namespace std;

int main(){

    int t,a,b,res,count,temp;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b;
        count =0;
        int res=a+b;
        while(res!=0){
            temp = res%10;
            if(temp==1)count+=2;
            if(temp==7)count+=3;
            if(temp==4)count+=4;
            if(temp==2||temp==3||temp==5)count+=5;
            if(temp==0||temp==6||temp==9)count+=6;
            if(temp==8)count+=7;
            res = res/10;   
            
        }
    cout<<count<<endl;
    }
}