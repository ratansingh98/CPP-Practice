#include<stdio.h>


int main(){
    int t = 0;
    scanf("%d",&t);

    for (int i = 0; i < t; i++)
    {
        int n1 = 0, n2 = 0, n3 = 0, n4 = 0; 
        scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
        
        printf("%.6lf\n", (double)n1/(n1 + n2));
    }
    return 0;
}