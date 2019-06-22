#include <bits/stdc++.h>

int main()
{
    int i,j,s=1,t=1,a;
    int S[10000],T[10000];
    for(i=0;i<10000;i++){
        S[i]=0;
        T[i]=0;
    }
    S[s]=1;
    T[t]=2;
    S[++s]=3;
    T[++t]=4;
    while(s<100){
        S[s+1]=S[s]+T[s];
        s++;
        for(j=S[s-1]+1;j<S[s];j++)
            T[t++]=j;
    }
    while(scanf("%d",&a)!=EOF){
        printf("%d\n",S[a]);
    }

    return 0;
}