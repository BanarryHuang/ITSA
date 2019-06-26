#include <bits/stdc++.h>
using namespace std;
int main(){

    int n,x;
    char s,g;
    float f;

    cin >> n;

    if(n<0)
        n++;
    while(n<13)
        n+=60;
    while(n>73)
        n-=60;

    n-=13;

    s='A'+n%10;

    g='a'+n%12;

    cout << s << g << endl;

    return 0;
}
