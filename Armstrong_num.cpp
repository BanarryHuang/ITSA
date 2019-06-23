#include <bits/stdc++.h>

int main(){

    int x;

    while(scanf("%d",&x)!=EOF){

        if(((x/100)*(x/100)*(x/100)+(x%100/10)*(x%100/10)*(x%100/10)+(x%10)*(x%10)*(x%10))==x)

        printf("Yes\n");

        else printf("No\n");

    }

    return 0;
}
