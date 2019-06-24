#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,T;
    while(scanf("%d",&n)!=EOF){
        for(i=n-1;i>=2;i--){
            T=1;
            for(j=2;j<i;j++)
                if(i%j==0){
                    T=0;
                    break;
                }
            if(T){
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}
