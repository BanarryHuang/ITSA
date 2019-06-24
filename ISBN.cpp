#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,in[10];
    char a;

    for(i=0;i<10;i++){
        cin >> a;
        if(isdigit(a))
            in[i]=a-'0';
        else
            in[i]=10;
    }

    for(i=0;i<2;i++)
        for(j=1;j<10;j++)
            in[j]=in[j]+in[j-1];

    if(in[9]%11==0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
