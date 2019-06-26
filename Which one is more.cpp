#include <bits/stdc++.h>
using namespace std;
int main(){

    int n,x,y,i,gc,bc,t;

    cin >> x >> y;

    n=x*y;

    gc=0;
    bc=0;

    for(i=0;i<n;i++){
        scanf("%d",&t);
        if(t==0) gc++;
        else bc++;
    }

    if(gc>bc) cout << 0 << endl;
    else if(gc<bc) cout << 1 << endl;
    else cout << 2 << endl;

    return 0;
}
