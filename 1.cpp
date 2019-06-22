#include <bits/stdc++.h>

int main(){
    int i,x,f;

    while(scanf("%d",&x)!=EOF){
        f=1;
    for(i=2;i*i<=x;i++){
        if(x%i==0){
            f=0;
            break;
        }
    }
    if(x==1) f=0;
    if(f)
        printf("YES\n");
    else
        printf("NO\n");
    }
}
