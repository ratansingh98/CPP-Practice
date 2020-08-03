#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int t,n,count,temp;
    cin>>t;
    for(int i=0;i<t;i++){

        cin>>n;
        count =1;
        while(n>=1){
            temp = int(sqrt(n));
            n = n-temp*temp;
            if(n>=1)
                count ++;
            else
                break;
            
        }
    cout<<count<<endl;
    }
        

    return 0;
}