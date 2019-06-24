#include <bits/stdc++.h>
using namespace std;
int f(int x){
    if(x==0||x==1)
        return x+1;
    else
        return f(x-1)+f(x/2);
}
int main()
{
    int k;

    cin >> k;

    cout << f(k) << endl;

    return 0;
}
