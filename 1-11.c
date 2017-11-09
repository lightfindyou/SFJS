#include<stdio.h>

int  main(){
    int n,m;
    scanf("%d%d",&n,&m);
    m = m/2-n;   //the number of rabbit
    n = n-m;     //the number of chicken
    printf("%d    %d\n",n,m);
    return 0;
}
