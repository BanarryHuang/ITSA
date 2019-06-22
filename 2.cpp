#include <bits/stdc++.h>
int cmp( const void *a , const void *b )
{
    return *(int *)a - *(int *)b;
}
int main(){
    int i=0,x,f,t,num=0,g,index,a[510];
    char b[6];

    while(scanf("%s",b)!=EOF){
        a[i++]=atoi(b);
    }
    t=i/2;
    qsort(a,i,sizeof(a[0]),cmp);
    g=0;
    for(f=0;f<i-1;f++){
        if(a[f]==a[f+1]){
            index=a[f];
            num++;
            if(num>t){
                g=1;
                break;
            }
        }
        else{
            num++;
            if(num>t){
                g=1;
                break;
            }
            num=0;
        }
    }
    if(a[i-2]==a[i-1])
        num++;
    if(num>t)
        g=1;
    if(g==1)
        printf("%d\n",index);
    else
        printf("n/a\n");
}
