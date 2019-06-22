#include <bits/stdc++.h>

int main(){
    int i,j,x,f;
    char b[300],d[30];
    fgets(b,300,stdin);
    scanf("%s%d",d,&x);
    for(j=0;j<x;j++){
        f=0;
        for(i=strlen(b)-2;i>-1;){
            if(f==1&&i%x==j){
                printf("%c%c",d[0],b[i]);
                i-=x;
            }
            if(f==0&&i%x==j){
                printf("%c",b[i]);
                i-=x;
                f=1;
            }
            if(f==0)i--;
        }
        printf("\n");
    }

    return 0;
}
