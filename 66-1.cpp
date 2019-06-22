#include <bits/stdc++.h>

int main()
{
    int i,j,k,max,c[1000],temp,num,co;
    char det[]=" ,";
    char *token;
    char a[210];
    while(gets(a)!=NULL){
        co=0;
        token=strtok(a,det);
        while(token!=NULL){
            c[co]= atoi(token);
            co++;
            token=strtok(NULL,det);
        }
        max=0;
        for(i=co-1;i>0;i--){
        for(j=0;j<i;j++) for(k=j+1;k<=i;k++)
            if(c[j]>c[k]){
                temp = c[k];
                c[k] = c[j];
                c[j] = temp;
            }
        }temp=0;
        for(i=0;i<co-1;i++){
            if(c[i+1]==c[i])
                temp++;
            else{
                temp++;
                if(temp>max){
                    max=temp;
                    num=c[i];
                }
                temp=0;
            }
        }
        temp++;

        if(temp>max){
                max=temp;
                num=c[co-1];
                temp=0;
        }
        if(max>(co/2)){
        printf("%d\n",num);
        }
        else printf("NO\n");
    }
    return 0;
}
