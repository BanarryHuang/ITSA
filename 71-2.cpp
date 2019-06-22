#include <bits/stdc++.h>

int main()
{
    int i,j,T,n,k,l,min,all;
    int a[101][101];
    int b[101];
    scanf("%d",&T);
    while(T--){
        scanf("%d %d",&n,&k);
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                scanf("%d",&(a[i][j]));

        printf("%d",k);
        all=1;
        while(all<n){
            min=10000;
            if(all==1){
                for(i=0;i<n;i++){
                    b[i]=a[k][i];
                }
                for(j=0;j<n;j++){
                    a[j][k]=10000;
                }
                b[k]=10000;
            }
            for(i=0;i<n;i++){
                if(i==k)
                    continue;
                if(b[i]>a[k][i])
                    b[i]=a[k][i];
                if(b[i]<min){
                    min=b[i];
                    l=i;
                }
            }
            printf(" %d",l);
            for(j=0;j<n;j++){
                a[j][l]=10000;
            }
            b[l]=10000;
            k=l;
            all++;
        }
    printf("\n");
    }

    return 0;
}