#include <bits/stdc++.h>
using namespace std;
int cmp( const void *a , const void *b )
{
    return *(int *)a - *(int *)b;
}
int main(){
    int i=0,x,f,t,numi=0,g,index,a[510];
    char b[6];

    while(!cin.eof()){
        cin >> b;
        a[i++]=atoi(b);
    }
    t=i/2;
    qsort(a,i,sizeof(a[0]),cmp);
    g=0;
    for(f=0;f<i-1;f++){
        if(a[f]==a[f+1]){
            index=a[f];
            numi++;
            if(numi>t){
                g=1;
                break;
            }
        }
        else{
            numi++;
            if(numi>t){
                g=1;
                break;
            }
            numi=0;
        }
    }
    if(a[i-2]==a[i-1])
        numi++;
    if(numi>t)
        g=1;
    if(g==1)
        cout << index << endl;
    else
        cout << "n/a" << endl;
}
