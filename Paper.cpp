#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T,x,y,z,w;
    cin >> T;
    while(T--){
        cin >> x >> y >> z >> w;
        if(x>y)
            swap(x,y);
        if(z>w)
            swap(z,w);
        if(x<=z&&y<=w)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
