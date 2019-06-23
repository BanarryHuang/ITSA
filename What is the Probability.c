#include <stdio.h>

int main(){

    int S,N,w,i;
    float p,all,x,y;

    scanf("%d",&S);

    while(S--){
        scanf("%d%f%d",&N,&p,&w);
        all=0;x=1;
        for(i=0;i<N;i++){
            if((w-1)==i)y=x;
            all+=x;
            x*=(1.0-p);
        }

        printf("%.4f\n",y/all);
    }


}
