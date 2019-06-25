#include <bits/stdc++.h>
using namespace std;
int main(){
    int i,j,x,f;
    char b[300],d[30];
    fgets(b,300,stdin);
    for(i=0;i<strlen(b);i++)
    	if(b[i]=='\n'||b[i]=='\r')
    		b[i]=0;
    cin >> d >> x;
    for(j=0;j<x;j++){
        f=0;
        for(i=strlen(b)-1;i>-1;){
            if(f==1&&i%x==j){
                cout << d[0] << b[i];
                i-=x;
            }
            if(f==0&&i%x==j){
                cout << b[i];
                i-=x;
                f=1;
            }
            if(f==0)
                i--;
        }
        cout << endl;
    }

    return 0;
}
