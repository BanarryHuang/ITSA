#include <bits/stdc++.h>

int main(){

    int i,j,k,flag;
    double f;
    char a[5][10];
    while(1){
        flag=1;
        for(i=0;i<5;i++){
            if(scanf("%s",a[i])==EOF){
                flag=0;
                break;
            }
        }
        if(!flag)
            break;
        if(a[0][0]=='x'){
            j=atoi(a[4]);
            k=atoi(a[2]);
            switch(a[1][0]){
                case '+':
                    f=j-k;
                    break;
                case '-':
                    f=j+k;
                    break;
                case '*':
                    f=(double)j/k;
                    f*=10;
                    f=(int)f;
                    f=(double)f/10;
                    break;
                case '/':
                    f=j*k;
                    break;
            }
        }
        else if(a[2][0]=='x'){
            j=atoi(a[0]);
            k=atoi(a[4]);
            switch(a[1][0]){
                case '+':
                    f=k-j;
                    break;
                case '-':
                    f=j-k;
                    break;
                case '*':
                    f=(double)k/j;
                    f*=10;
                    f=(int)f;
                    f=(double)f/10;
                    break;
                case '/':
                    f=(double)j/k;
                    f*=10;
                    f=(int)f;
                    f=(double)f/10;
                    break;
            }
        }
        else{
            j=atoi(a[0]);
            k=atoi(a[2]);
            switch(a[1][0]){
                case '+':
                    f=j+k;
                    break;
                case '-':
                    f=j-k;
                    break;
                case '*':
                    f=j*k;
                    break;
                case '/':
                    f=(double)j/k;
                    f*=10;
                    f=(int)f;
                    f=(double)f/10;
                    break;
            }
        }
        printf("%.1f\n",f);
    }
    return 0;
}
