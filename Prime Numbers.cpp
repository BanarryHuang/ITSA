#include <bits/stdc++.h>

int main()
{
    int p,i,j,flag,n;
    while(1){
        n=0;
        scanf("%d",&p);
        if(p==0)
            break;
        else{
            for(i=2;i<p;i++){
                flag=1;
                for(j=2;j*j<=i;j++){
                    if(i%j==0){
                        flag=0;
                        break;
                    }
                }
                if(flag)
                    n++;
            }
            printf("%d\n",n);
        }
    }
    return 0;
}
