#include<bits/stdc++.h>
#define uint16_t int
using namespace std;

int arraySum(int a[], int n)  
{ 
    int initial_sum  = 0;  
    return accumulate(a, a+n, initial_sum); 
} 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int register t,n;
    int p,s;
    cin>>t;
    while(t--){
        cin>>n;
        int sum,a[9];
        for(int i=0;i<9;i++)
            a[i]=0;
        while(n--){
            cin>>p>>s;
            if(p<9){
                if(s>a[p-1]) a[p-1]=s;
            } 
        }
        cout<< arraySum(a, 9)<<endl; 
    }

    return 0;
}