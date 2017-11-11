#include<stdio.h>
#include<time.h>

int  main(){
    const int MOD = 1000000;
    int n,S=0;
    scanf("%d",&n);
    int fac = 1;
    for(int i = 1;i<=n;i++){
        fac *= i;
	S = (S+fac)%MOD;
    }
    printf("%d\n",S);
    printf("%.3f\n",(double)clock()/CLOCKS_PER_SEC);
    return 0;
}
