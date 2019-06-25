#include <bits/stdc++.h>
using namespace std;
int main(){

    int i,j,k,flag;
    double f;
    char a[5][10];
    while(!cin.eof()){
        for(i=0;i<5;i++)
            cin >> a[i];
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
        cout  << fixed << setprecision(1) << f << endl;
    }
    return 0;
}
