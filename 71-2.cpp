#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,T,n,k,l,mini,all;
    int a[101][101];
    int b[101];
    cin >> T;
    while(T--){
        cin >> n >> k;
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                cin >> a[i][j];
        cout << k;
        all=1;
        while(all<n){
            mini=10000;
            if(all==1){
                for(i=0;i<n;i++){
                    b[i]=a[k][i];
                }
                for(j=0;j<n;j++){
                    a[j][k]=10000;
                }
                b[k]=10000;
            }
            for(i=0;i<n;i++){
                if(i==k)
                    continue;
                if(b[i]>a[k][i])
                    b[i]=a[k][i];
                if(b[i]<mini){
                    mini=b[i];
                    l=i;
                }
            }
            cout << " " << l;
            for(j=0;j<n;j++)
                a[j][l]=10000;
            b[l]=10000;
            k=l;
            all++;
        }
        cout << endl;
    }
    return 0;
}
