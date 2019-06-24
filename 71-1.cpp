#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,a,s,d,f,q,w,e,r,A,B;
    cin >> i;
    a=i/1000;
    s=i%1000/100;
    d=i%100/10;
    f=i%10;

    while(1){
        A=0;B=0;
        scanf("%d",&j);
        q=j/1000;
        w=j%1000/100;
        e=j%100/10;
        r=j%10;
        if(q==0&&w==0&&w==0&&r==0)
            break;
        if(a==q) A++;
        if(s==w) A++;
        if(d==e) A++;
        if(f==r) A++;
        if(a==w||a==e||a==r) B++;
        if(s==q||s==e||s==r) B++;
        if(d==w||d==q||d==r) B++;
        if(f==w||f==e||f==q) B++;
        cout << A << 'A' << B << 'B' << endl;
    }

    return 0;
}
